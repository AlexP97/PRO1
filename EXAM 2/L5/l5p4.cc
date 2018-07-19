#include <iostream>
using namespace std;

void canvi_base_2nombres (int n, int t) {
	if (n != 0 and t != 0) {
		canvi_base_2nombres (n / 2, t / 2);
		cout << n % 2;
		cout << t % 2;
	}
	
}
int main () {
	int n, t;
	while (cin >> n >> t) {
		canvi_base_2nombres (n, t);
		cout << endl;
	}
}
