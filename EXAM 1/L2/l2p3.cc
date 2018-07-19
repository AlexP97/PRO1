#include <iostream>
using namespace std;

int main (){
	int x;
	cin >> x;
	for (int i = 1; i <= x; i++){
		for (int j = x - i; j >= 1; j--) cout << "+";
		cout << "/";
		for (int r = 2; r <= i; r++) cout << "*";
		cout << endl;
	}
}	
