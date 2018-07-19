#include <iostream>
using namespace std;

int main () {
	int a, b;
	int contador = 1;
	while (cin >> a >> b) {
		int n = a / b;
		int x = n * b;
		if (x >= a) cout << '#' << contador << " : " << x << endl;
		else {
			n = n + 1;
			cout << '#' << contador << " : " << n*b << endl;
		}
	contador = contador + 1;	
	}
}	
      
