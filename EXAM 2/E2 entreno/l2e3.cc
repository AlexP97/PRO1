#include <iostream>
using namespace std;

void write_binary(int n, int k) {
	int i;
	if (k > 0) { 
		i = n%2;
		write_binary(n/2, k - 1);
		cout << i;
	}
}	
	
int main() {
	int n, k;
	while (cin >> n >> k) {
		write_binary(n,k);
		cout << endl;
	}
}
