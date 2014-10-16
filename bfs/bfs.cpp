#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int u, v, nV, nE, a, b;
	
	cin >> nV >> nE;

	vector<vector<int> > G(nV, vector<int>(0));
	
	for (int i = 0; i < nE; i++)
	{
		cin >> a >> b;
		a = a - 1;
		b = b - 1;
		G[a].push_back(b);
	}


	for (int i = 0; i < nV; i++)
	{
		vector<bool> visited(nV, false);
		vector<int> P(nV, -1);
		queue<int> Q;
		bool found = false;
		int path = -1;


		Q.push(0);
		visited[0] = true;

		while (!Q.empty())
		{			
			v = Q.front();
			Q.pop();
			if (v == i)
			{
				found = true;
				break;
			}

			for (int j = 0; j < G[v].size(); j++)
			{
				u = G[v][j];

				if (!visited[u])
				{
					P[u] = v;
					Q.push(u);
					visited[u] = true;
				}
			}
		}

		if (!found)
		{
			cout << "-1 ";
		}
		else
		{
			while (v > -1)
			{
				path++;
				v = P[v];
			}
			cout << path << " ";
		}	
	}
	cout << endl;

	return 0;
}