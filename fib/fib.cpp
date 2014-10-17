#include <iostream>

using namespace std;

int main()
{
	int n, k;
	long long int C = 1, P = 0, c = 0, sum = C + P;

	cin >> n >> k;

	if (n < 3)
	{
		cout << sum << endl;
	}
	else
	{

/*
	n=5, k=3
	1 C
	2 P
	3 P CCC
	4 P P P P CCC
	5 P P P P PPP CCC CCC CCC CCC 
*/

		C = 0;
		P = 1;
		sum = C + P;

		for (int i = 3; i <= n; i++)
		{
			c = P * k;
			P = P + C;
			C = c;
			sum = P + C; 
		}

		cout << sum << endl;


	}

	
	return 0;
}