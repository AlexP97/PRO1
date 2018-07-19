#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	char c;
	while (cin >> c) {
		string alfab;
		cin >> alfab;
		for (int i = 1; i < alfab.size(); i++) cin >> alfab[i];
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			string linea;
			while (cin >> linea) {
				for (int i = 0; i < linea.size(); i++) {
					if (linea[i] == '_') cout << ' ';
					else {
						bool trobat = false;
						int k = 0;
						while (not trobat) {
							if (linea[i] == alfab[k]) {
								trobat = true;
								char x = 'a' + k;
								cout << x;
							}
							k++;
						}
					}
				}
				cout << endl;
			}
		}
		cout << endl;
	}
}
