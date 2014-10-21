#include <iostream>

using namespace std;

int main()
{
	long long int F[3] = {0, 1, 1};
	int n, i;

	cin >> n;

	if (n < 3)
	{
		cout << F[n] << endl;
	}
	else
	{
		for (i = 3; i <= n; i++)
		{
			F[0] = F[1];
			F[1] = F[2];
			F[2] = F[0] + F[1];
		}
		cout << F[2] << endl;
		
	}

	return 0;
}