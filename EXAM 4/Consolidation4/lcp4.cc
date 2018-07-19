#include <iostream>
#include <vector>
using namespace std;

bool quadrat_magic(const vector< vector<int> >& t) {
	int sumai = 0;
	for (int i = 0; i < t.size(); i++) sumai = sumai + t[i][0];
	int suma = 0;
	for (int i = 0; i < t.size(); i++) {
		for (int j = 0; j < t[i].size(); j++) {
			suma = suma + t[j][i];
		}
		if (suma != sumai) return false;
		suma = 0;
	}
	for (int i = 0; i < t.size(); i++) {
		for (int j = 0; j < t[i].size(); j++) {
			suma = suma + t[i][j];
		}
		if (suma != sumai) return false;
		suma = 0;
	}
	int i = 0;
	int j = 0;
	while (i < t.size() and j < t[i].size()) {
		suma = suma + t[i][j];
		i++;
		j++;
	}
	if (suma != sumai) return false;
	suma = 0;
	i = 0;
	j = t[0].size() - 1;
	while (i < t.size() and j >= 0) {
		suma = suma + t[i][j];
		i++;
		j--;
	}
	if (suma != sumai) return false;
	
	return true;
}

