#include <iostream>
#include <vector> 
using namespace std;

typedef vector< vector<int> > Matriu;

void llegeix_matriu(Matriu& m) {
	for (int i = 0; i < m.size(); i++) {
		for (int j = 0; j < m[i].size(); j++) cin >> m[i][j];
	}
}

Matriu suma(const Matriu& a, const Matriu& b) {
	if (a.size() == 0) return a;
	int f = a.size();
	int co = a[0].size();
	Matriu c(f, vector<int>(co));
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < co; j++) c[i][j] = a[i][j] + b[i][j];
	}
	return c;
}

int main() {
	int f, co;
	cin >> f >> co;
	Matriu a(f, vector<int>(co));
	Matriu b(f, vector<int>(co));
	llegeix_matriu(a);
	llegeix_matriu(b);
	Matriu c = suma(a, b);
	for (int i = 0; i < c.size(); i++) {
		for (int j = 0; j < c[i].size(); j++) cout << c[i][j] << ' ';
	}
}
	
