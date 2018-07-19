#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matriu;

Matriu llegeix_matriu(int f, int c) {
    Matriu m(f, vector<int>(c));
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) cin >> m[i][j];
    }
    return m;
}

int main() {
    int f, c;
    int acum = 1;
    while (cin >> f >> c) {
        Matriu m = llegeix_matriu(f, c);
        bool creixent = true;
        int auxf = 0;
        int auxc = 0;
		bool ultim = false;
		int ant = m[auxf][auxc];
        while (creixent and auxc < c) {
			if (auxc == c - 1) ultim = true;
			if (not ultim) {
				if (m[auxf][auxc] <= ant) creixent = false;
				ant = m[auxf][auxc];
			}
            if (auxc%2 == 0) {
                for (int i = 1; i < f; i++) {
                    if (m[i][auxc] <= ant) creixent = false;
                    ant = m[i][auxc];
                    auxf = i;
                }
            }
            else {
                for (int i = f - 1; i >= 0; i--) {
                    if (m[i][auxc] <= ant) creixent = false;
                    ant = m[i][auxc];
                    auxf = i;
                }
            }
            auxc = auxc + 1;
        }
        if (creixent) cout << "matriu " << acum << ": si" << endl;
        else cout << "matriu " << acum << ": no" << endl;
        acum++;
    }
}
