#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef vector< vector<int> > Matriu;

int main() {
    int fila, columna;
    cin >> fila >> columna;
    Matriu m(fila, vector<int> (columna));
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) cin >> m[i][j];
    }
    string s;
    while (cin >> s) {
        if (s == "fila") {
            int n;
            cin >> n;
            cout << "fila " << n << ": ";
            bool primer = true;
            for (int j = 0; j < m[n - 1].size(); j++) {
                if (primer) {
                    cout << m[n - 1][j];
                    primer = false;
                }
                else cout << ' ' << m[n - 1][j];
            }
            cout << endl;
        }
        else if (s == "columna") {
            int n;
            cin >> n;
            cout << "columna " << n << ": ";
            bool primer = true;
            for (int i = 0; i < m.size(); i++) {
                if (primer) {
                    cout << m[i][n - 1];
                    primer = false;
                }
                else cout << ' ' << m[i][n - 1];
            }
            cout << endl;
        }
        else {
            int x, y;
            cin >> x >> y;
            cout << "element " << x << ' ' << y << ": " << m[x - 1][y - 1] << endl;
        }
    }
}