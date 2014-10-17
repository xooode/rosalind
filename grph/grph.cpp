#include <string>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
typedef struct
{
	string name;
	string prefix;
	string suffix;
} node_t;

string getPrefix(const string & s, int k)
{
	return s.substr(0, k);
}

string getSuffix(const string & s, int k)
{
	return s.substr(s.length() - k, k);
}

int main()
{
	string tmp, dna;
	vector <node_t> nodes;
	node_t node;
	int k = 3;
	bool readFASTA = false;

	while (cin >> tmp)
	{
		if (tmp[0] == '>')
		{
			if (readFASTA)
			{
				readFASTA = false;
				node.prefix = getPrefix(dna, k);
				node.suffix = getSuffix(dna, k);
				nodes.push_back(node);
				dna.clear();
			}
			node.name = tmp.erase(0, 1);
		}
		else
		{
			dna = dna + tmp;
			readFASTA = true;
		}
	}
	if (readFASTA)
	{
		node.prefix = getPrefix(dna, k);
		node.suffix = getSuffix(dna, k);
		nodes.push_back(node);
	}

	for (int i = 0; i < nodes.size(); i++)
	{
		for (int j = 0; j < nodes.size(); j++)
		{
			if (i != j)
			{
				if (nodes[i].suffix == nodes[j].prefix)
				{
					cout << nodes[i].name << " " << nodes[j].name << endl;
				}
			}
		}
	}

	return 0;
}