#include <iostream>
#include <vector> 
using namespace std;

typedef vector< vector<int> > Matriu;

void llegeix_matriu(Matriu& m) {
	for (int i = 0; i < m.size(); i++) {
		for (int j = 0; j < m[i].size(); j++) cin >> m[i][j];
	}
}

bool zigzag(const Matriu& m) {
	int x = 0;
	int y = 0;
	int count = 0;
	int ant = m[x][y];
	bool primer = true;
	while (count < m[0].size()) {
		if (not primer) {
			y++;
			if (ant >= m[x][y]) return false;
			ant = m[x][y];
		}
		if (count%2 == 0) {  
			for (int i = 1; i < m.size(); i++) {
				if (m[i][y] <= ant) return false;
				ant = m[i][y];
				x = i;
			}
		}
		else {
			for (int i = m.size() - 2; i >= 0; i--) {
				if (m[i][y] <= ant) return false;
				ant = m[i][y];
				x = i;
			}
		}
		primer = false;
		count++;
	}
	return true;
}

int main() {
	int f, c;
	int count = 1;
	while (cin >> f >> c) {
		Matriu m(f, vector<int>(c));
		llegeix_matriu(m);
		if (zigzag(m)) cout << "matriu " << count << ": si";
		else cout << "matriu " << count << ": no";
		cout << endl;
		count++;
	}
	
	
}
