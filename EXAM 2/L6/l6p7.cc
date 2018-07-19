#include <iostream>
using namespace std;

bool es_de_hamming(int x) {
	while (x > 1) {
		if (x % 2 == 0) x = x / 2;
		else if (x % 3 == 0) x = x / 3;
		else if (x % 5 == 0) x = x / 5;
		else return false;
	}
	return true;
	
}
	

int main () {
	int x;
	bool primer = true;
	while (cin >> x) {
		int count = 0;
		for (int i = 1; count < x; i++) {
			if (es_de_hamming(i) == true){
				if (primer == true) cout << i;
				else cout << ',' << i;
				primer = false;
				count = count + 1;
			}
		}
		cout << endl;
		primer = true;
	}
}
