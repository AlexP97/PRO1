#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

Matriu producte(const Matriu& a, const Matriu& b) {
    Matriu c(a.size(), vector<int> (a.size()));
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a.size(); j++) {
            int count = 0;
            for (int k = 0; k < a.size(); k++) {
                count = a[i][k] * b[k][j] + count;
            }
            c[i][j] = count;
        }               
    }
    return c;
}
