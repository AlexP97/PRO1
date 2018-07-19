#include <iostream>
#include <vector>
using namespace std;

vector<double> fusio(const vector<double>& v1, const vector<double>& v2) {
	vector<double> v3;
	int i = 0;
	int j = 0;
	while (i < v1.size() and j < v2.size()) {
		if (v1[i] < v2[j]) {
			v3.push_back(v1[i]);
			i++;
		}
		else if (v1[i] > v2[j]) {
			v3.push_back(v2[j]);
			j++;
		}
		else {
			v3.push_back(v1[i]);
			v3.push_back(v2[j]);
			i++;
			j++;
		}
	}
	if (i < v1.size()) {
		while (i < v1.size()) {
			v3.push_back(v1[i]);
			i++;
		}
	}
	if (j < v2.size()) {
		while (j < v2.size()) {
			v3.push_back(v2[j]);
			j++;
		}
	}
	return v3;
}
