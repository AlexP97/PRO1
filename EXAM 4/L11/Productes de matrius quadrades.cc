#include <iostream>
#include <vector> 
using namespace std;

typedef vector< vector<int> > Matriu;

Matriu producte(const Matriu& a, const Matriu& b) {
	int f = a.size();
	Matriu c(f, vector<int>(f));
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < f; j++) {
			int suma = 0;
			for (int k = 0; k < f; k++) {
				suma = suma + a[i][k] * b[k][j];
			}
			c[i][j] = suma;
		}
	}
	return c;
}
