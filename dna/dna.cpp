#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int counter[4] = {0, 0, 0, 0};

	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		switch (s[i])
		{
			case 'A' : counter[0]++; break;
			case 'C' : counter[1]++; break;
			case 'G' : counter[2]++; break;
			case 'T' : counter[3]++; break;
		}
	}

	cout << counter[0] << " "
		 << counter[1] << " "
		 << counter[2] << " "
		 << counter[3] << endl;

	return 0;
}