#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Quadrat;

bool es_llati(const Quadrat& q) {
	int n = q.size();
	for (int i = 0; i < n; i++) {
		vector<bool> v(n, false);
		for (int j = 0; j < n; j++) {
			int m = q[i][j] - 1;
			if (m%2 == 0) return false;
		}
	}
	return true;
}
