#include <iostream>
#include <vector>
using namespace std;

void construeix_vector(vector<int>& barra, int x){
	while (x > 0) {
		barra.push_back(x%10);
		x = x/10;
	}
	
}

int main() {
	int n;
	while (cin >> n) {
		int x = n;
		vector<int> barra;
		construeix_vector(barra, x);	
		int suma = 0;
		for (int i = 0; i < barra.size(); i++) {
			if (i%2 == 0) suma = suma + 3 * barra[i];
			else suma = suma + barra[i];
		}
		if (suma%10 == 0) {
			for (int i = barra.size() - 1; i >= 0; i--) {
				cout << barra[i];
			}
			cout << 0 << endl;
		}
		else {
			int residu = n%10;
			residu = 10 - residu;
			residu = suma + residu;
			for (int i = barra.size() - 1; i >= 0; i--) {
				cout << barra[i];
			}
			cout << residu - suma << endl; 
		}
	}
}
