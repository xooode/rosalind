#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int v, e, a, b;
	
	cin >> v >> e;

	vector<vector<int> > G(v, vector<int>(0));

	for (int i = 0; i < e; i++)
	{
		cin >> a >> b;
		G[a - 1].push_back(b);
		G[b - 1].push_back(a);
	}

	for (int i = 0; i < v; i++)
	{
		cout << G[i].size() << " ";
	}
	cout << endl;

	return 0;
}