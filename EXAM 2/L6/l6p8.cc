#include <iostream>
using namespace std;

int rotacio_dreta(int x, int k) {
	int i = 1;
	if (k == 0) return x;
	else {
		while (k > 0) {
			i = i * 10;
			k = k - 1;
		}	
			cout << x % i;
			x = x / i;
	}
	return x;
}

int main () {
	int x, k;
	while(cin >> x >> k) {
		cout << rotacio_dreta(x, k) << endl;
	}
}

	
