#include <iostream>
#include <vector>
using namespace std;
 
int posicio_maxim(const vector<double>& v, int m) {
        double max=v[0];
        int pos_max=0;
        for (int i=1; i<=m; ++i) {
                if (v[i]>max) {
                        max=v[i];
                        pos_max=i;
                }
        }
        return pos_max;
}
