#include <string>
#include <iostream>

using namespace std;

int c2v(char c)
{
	if (c == 'U') return 0;
	if (c == 'C') return 1;
	if (c == 'A') return 2;
	if (c == 'G') return 3;
}

char codon2letter(char x, char y, char z)
{
	char symbols[] = "FFLLSSSSYY  CC WLLLLPPPPHHQQRRRRIIIMTTTTNNKKSSRRVVVVAAAADDEEGGGG";
	int value = c2v(x) * 16 + c2v(y) * 4 + c2v(z);
	return symbols[value];
}

int main()
{
	string rna, protein;

	cin >> rna;

	for (int i = 0; i < rna.length(); i = i + 3)
	{
		protein = protein + codon2letter(rna[i], rna[i+1], rna[i+2]);
	}

	cout << protein << endl;
}