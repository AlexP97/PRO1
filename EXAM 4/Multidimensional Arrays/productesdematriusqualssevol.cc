#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

Matriu producte(const Matriu& a, const Matriu& b) {
	int colb = 	b[0].size();
	int filaa = a.size();
	int cola = a[0].size();
	Matriu c(filaa, vector<int>(colb));
	for (int i = 0; i < filaa; i++) {
		for (int j = 0; j < colb; j++) {
			int suma = 0;
			for (int k = 0; k < cola; k++) {
				suma = suma + a[i][k] * b[k][j];
			}
			c[i][j] = suma;
		}
	}
	return c;
}
