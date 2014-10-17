#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, k;

	cin >> n >> k;

	vector<long long int> R(k, 0);
	long long int P, C, D, nP, SUM;

	if (n == 1)
	{
		cout << 1 << endl;
	}
	else
	{
		R[0] = 1;
		C = 1;
		P = 0;
		SUM = C + P;

		for (int i = 2; i <= n; i++)
		{
			D = R[k - 1];
			nP = R[0];

			for (int j = k - 1; j > 0; j--)
			{
				R[j] = R[j - 1];
			}
			R[0] = C = P;
			P = P - D + nP;
			SUM = P + C;

/*
			cout << i;
			for (int j = 0; j < R.size(); j++)
			{
				cout << " " << R[j];
			}
			cout << endl;
*/			
		}
	}

	cout << SUM << endl;

	return 0;
}