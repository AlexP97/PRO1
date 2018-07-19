#include <iostream>
#include <vector>
using namespace std;

void swap(int x, int y) {
	int aux = x;
	x = y; 
	y = aux;
}

void insereix(vector<double>& v) {
	int n = v.size() - 2;
	int posx = v.size() - 1;
	bool ordenat = false;
	while (n >= 0 and not ordenat) {
		if (v[posx] < v[n]) {
			swap(v[posx], v[n]);
			posx = n;
		}
		else ordenat = true;
		n--;
	}
}
