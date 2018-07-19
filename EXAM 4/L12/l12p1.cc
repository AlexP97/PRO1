#include <iostream>
#include <vector>
using namespace std;

int posicio(double x, const vector<double>& v, int esq, int dre) {
        if (esq > dre) return -1;
        int mid = (dre + esq)/2 ;
        if (x == v[mid]) return mid;
        else if (x < v[mid]) return posicio(x, v, esq, mid-1);
        else return posicio(x, v, mid+1, dre);
}
 
