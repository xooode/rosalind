#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

double countGC(const string & s)
{
	//cout << "[" << s << "]" << endl;

	int gcVal = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'G' || s[i] == 'C')
		{
			gcVal++;
		}
	}
	return 100.0 * gcVal / s.length();
}

int main()
{
	string name, dna, maxName, tmp;
	double maxGC, gc = 0;
	bool runCountGC = false;

	while (cin >> tmp)
	{
		if (tmp[0] == '>')
		{
			if (runCountGC)
			{
				runCountGC = false;
				gc = countGC(dna);
				if (maxGC < gc)
				{
					maxName = name;
					maxGC = gc;
				}
				dna = "";
			}
			name = tmp;
		}
		else
		{
			runCountGC = true;
			dna = dna + tmp;
		}
	}

	if (runCountGC)
	{
		gc = countGC(dna);
		if (maxGC < gc)
		{
			maxName = name;
			maxGC = gc;
		}
	}
	maxName.erase(0, 1);
	cout << maxName << endl << fixed << setprecision(6) << maxGC << endl;
	
	return 0;
}