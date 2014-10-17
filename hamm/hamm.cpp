#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b;
	int h = 0;

	cin >> a >> b;

	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] != b[i])
		{
			h++;
		}
	}

	cout << h << endl;
}