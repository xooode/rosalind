#include <iostream>

using namespace std;

int insertionSort(int * A, int n)
{
	int i, j, tmp;
	int c = 0;
	for (i = 1; i < n; i++)
	{
		j = i;
		while (j > 0 && A[j - 1] > A[j])
		{
			tmp = A[j];
			A[j] = A[j - 1];
			A[j - 1] = tmp;
			c++;
			j--;
		}
	}

	return c;
}

int main()
{
	int n;

	cin >> n;

	int A[n];

	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	cout << insertionSort(A, n) << endl;

	return 0;
}