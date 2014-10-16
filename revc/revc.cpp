#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		switch (s[i])
		{
			case 'A': s[i] = 'T'; break;
			case 'T': s[i] = 'A'; break;
			case 'G': s[i] = 'C'; break;
			case 'C': s[i] = 'G'; break; 
		}
	}
	reverse(s.begin(), s.end());

	cout << s << endl;

	return 0;
}