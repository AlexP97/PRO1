#include <iostream>
using namespace std;

bool es_narcicista(int n) {
	int k = n;
	int count = 0;
	int suma = 0;
	while (k > 0) {
		k = k / 10;
		count = count + 1;
	}
	int t = n;
	while (t > 0) {
		int multipl = 1;
		k = n%10;
		t = t/10;
		for (int i = 1; i <= count; i++) 
			multipl = multipl * k;
		suma = suma + multipl;
	}
	if (suma == n) return true;
	else return false;
}


int main() {
	int n;
	bool narcis = true;
	while (cin >> n and narcis) {
		narcis = es_narcicista(n);
	}
	if (narcis) cout << "SI" << endl;
	else cout << "NO" << endl;
}
