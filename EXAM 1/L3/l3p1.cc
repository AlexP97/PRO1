#include <iostream>
using namespace std;

int main () {
	int b, n;
	while (cin >> b >> n){
		int i = 1;
		while (n >= b) {
			n = n / b;
			i = i + 1;
	}
		cout << i << endl;
	}
	
}
