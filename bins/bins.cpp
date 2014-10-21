#include <iostream>

using namespace std;

int findIndex(int * A, int n, int value)
{
	int middleIndex;
	int index = -1;

	int from = 0, to = n - 1;
	bool found = false;

	if (A[0] > value || A[n-1] < value)
	{
		return -1;
	}

	while (from <= to && !found)
	{		
		middleIndex = from + (to + 1 - from) / 2;

		//cout << "[" << from << "," << to <<"] [" << middleIndex << "]" << endl;

		if (A[middleIndex] == value)
		{
			found = true;
			index = middleIndex + 1;
		}
		else if (A[middleIndex] > value)
		{
			to = middleIndex - 1;
		}
		else
		{
			from = middleIndex + 1;
		}
	}

	return index;
}

int main()
{
	int n, m, i;

	cin >> n;
	cin >> m;

	int A[n], B[m];

	for (i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	for (i = 0; i < m; i++)
	{
		cin >> B[i];
	}

	for (i = 0; i < m; i++)
	{
		cout << findIndex(A, n, B[i]) << " ";
	}

	cout << endl;

	return 0;
}