#include <iostream>

using namespace std;

void merge(int * A, int n, int * B, int m, int * C)
{
	int i = 0, j = 0, k = 0;

	while (i < n && j < m)
	{
		if (A[i] > B[j])
		{
			C[k++] = B[j++];
		}
		else if (A[i] < B[j])
		{
			C[k++] = A[i++];
		}
		else
		{
			C[k++] = A[i++];
			C[k++] = B[j++];
		}
	}

	while (i < n)
	{
		C[k++] = A[i++];
	}
	while (j < m)
	{
		C[k++] = B[j++];
	}	
}

int main()
{

	int n, m;

	cin >> n;
	int A[n];
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	cin >> m;
	int B[m];
	for (int i = 0; i < m; i++)
	{
		cin >> B[i];
	}

	int C[n+m];

	merge(A, n, B, m, C);

	for (int i = 0; i < n + m; i++)
	{
		cout << C[i] << " ";
	}

	cout << endl;
	return 0;
}