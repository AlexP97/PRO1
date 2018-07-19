#include <iostream>
#include <vector>
using namespace std;

void swap(int& i, int& j) {
	int aux = i;
	i = j;
	j = aux;
}

void insereix(vector<double>& v) {
	int i = v.size() - 1;
	bool ordenat = false;
	while (i > 0 and not ordenat) {
		if (v[i] < v[i-1]) swap(v[i], v[i-1]);
		else ordenat = true;
		i--;
	}
}
