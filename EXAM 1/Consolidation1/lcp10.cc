#include <iostream>
using namespace std;

int main () {
	int x, y, z;
	cin >> x >> y >> z;
	for (int k = 1; k <= x; k++){
		int q = 9;
		for (int j = 1; j <= y; j++){
			for (int i = 1; i <= z; i++){
				cout << q;
				q = q - 1;
				if (q < 0) q = q + 10;
			}
			cout << endl;	
		}
		cout << endl;
		cout << endl;
	}
		
}
