#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string s, t;
	int len; // length of prefix-sufix
	int patternPos;

	cin >> s >> t;

	vector<int> KMPNext(t.length() + 1);

	// generate KMPNext
	KMPNext[0] = -1;
	len = -1;

	for (int i = 1; i <= t.length(); i++)
	{
		while (len > -1 && t[len] != t[i - 1])
		{
			len = KMPNext[len];
		}
		len = len + 1;
		if (i == t.length() || t[i] != t[len])
		{
			KMPNext[i] = len;
		}
		else
		{
			KMPNext[i] = KMPNext[len];
		}
	}

	/*
	for (int i = 0; i < KMPNext.size(); i++)
	{
		cout << KMPNext[i] << " ";
	}
	cout << endl;
	*/

	patternPos = -1;
	len = 0;

	for (int i = 0; i < s.length(); i++)
	{
		while (len > -1 && t[len] != s[i])
		{
			len = KMPNext[len];
		}
		len = len + 1;
		if (len == t.length())
		{

			patternPos = i - len + 1;
			len = KMPNext[len];
			cout << patternPos + 1 << " ";
		}
	}
	cout << endl;

	return 0;
}