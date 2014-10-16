#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int v, e, a, b;
	
	// read number of vertices and edges
	cin >> v >> e;

	// creating empty graph
	vector<vector<int> > G(v, vector<int>(0));

	// read edges
	for (int i = 0; i < e; i++)
	{
		cin >> a >> b;
		G[a - 1].push_back(b);
		G[b - 1].push_back(a);
	}

	// count the sum of the degrees of neighbours
	for (int i = 0; i < v; i++)
	{
		int sum = 0;
		for (int j = 0; j < G[i].size(); j++)
		{
			sum = sum + G[G[i][j] - 1].size();
		}
		cout << sum << " ";
	}
	cout << endl;

	return 0;
}