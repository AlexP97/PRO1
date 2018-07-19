#include <iostream>
#include <vector>
using namespace std;

vector<double> fusio(const vector<double>& v1, const vector<double>& v2) {
    int inc1 = 0;
    int inc2 = 0;
    vector<double> v3(v1.size() + v2.size());
	int i = 0;
    while (inc1 < v1.size() and inc2 < v2.size()) {
        if (v1[inc1] < v2[inc2]) {
            v3[i] = v1[inc1];
            inc1++;
			i++;
        }
        else if (v1[inc1] > v2[inc2]) {
            v3[i] = v2[inc2];
            inc2++;
			i++;
        }
        else {
            v3[i] = v2[inc2];
			i++;
            v3[i] = v1[inc1];
			i++;
            inc1++;
            inc2++;
        }
    }
    while (inc1 < v1.size()) {
		v3[i] = v1[inc1];
		i++;
        inc1++;
	}
    while (inc2 < v2.size()) {
		v3[i] = v2[inc2];
		i++;
		inc2++;
    }
    return v3;
}
