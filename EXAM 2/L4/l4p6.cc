#include <iostream>
using namespace std;

void engreixa(int& x)
	int digits = 0;
	for (int i = x; i != 0, i = i / 10) digits = digits + 1;
	
	
	
	
	
	
	
int main () {
	int x;
	cin >> x;
	engreixa x;
	cout << x << endl;
}
