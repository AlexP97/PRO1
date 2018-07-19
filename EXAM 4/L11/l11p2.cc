#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

Matriu suma(const Matriu& a, const Matriu& b) {
    if (a.size() > 0) {
        Matriu suma(a.size(), vector<int> (a[0].size()));
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < a[i].size(); j++) {
                suma[i][j] = a[i][j] + b[i][j];
            }  
        }
        return suma;
    }
    else return a;
    
}