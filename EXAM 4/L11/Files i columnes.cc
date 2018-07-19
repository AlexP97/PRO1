#include <iostream>
#include <vector> 
#include <string>
using namespace std;

typedef vector< vector<int> > Matriu;

void llegeix_matriu(Matriu& m) {
	for (int i = 0; i < m.size(); i++) {
		for (int j = 0; j < m[i].size(); j++) cin >> m[i][j];
	}
}

int main() {
	int f, c;
	cin >> f >> c;
	Matriu m(f, vector<int>(c));
	llegeix_matriu(m);
	string s;
	while (cin >> s) {
		if (s == "fila") {
			int x;
			cin >> x;
			cout << s << ' ' << x << ":";
			for (int j = 0; j < m[x - 1].size(); j++) cout << ' ' << m[x - 1][j];
		}
		else if (s == "columna") {
			int x;
			cin >> x;
			cout << s << ' ' << x << ":";
			for (int i = 0; i < m.size(); i++) cout << ' ' << m[i][x - 1];
		}
		else {
			int x, y;
			cin >> x >> y;
			cout << s << ' ' << x << ' ' << y << ": " << m[x - 1][y - 1];
		}
		cout << endl;
	}
}
