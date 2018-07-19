#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		vector <int> sequence(n);
		for (int i = 0; i < n; i++) {
			cin >> sequence[i];
		}
		int i = 0;
		int j = n - 1;
		bool primer = true;
		while (i <= j) {
			if (i != j) {
				if (primer) {
					cout << sequence[i] << ' ';
					cout << sequence[j];
					i = i + 1;
					j = j - 1;
					primer = false;
				}
				else {
					cout << ' ' << sequence[i] << ' ';
					cout << sequence[j];
					i = i + 1;
					j = j - 1;
				}
			}
			else {
				cout << ' ' << sequence[i];
				i = i + 1;
				j = j - 1;
			}
		
		}
		cout << endl;
	}
}
