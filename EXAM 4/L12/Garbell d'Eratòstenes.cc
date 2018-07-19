#include <iostream>
#include <vector>
using namespace std;

void garbell(vector<bool>& v, int N) {
	v[0] = false;
	v[1] = false;
	for (int i = 2; i*i <= N; ++i) {
		if (v[i]) {
			for (int j = 2*i; j < N; j = j + i) {
				v[j] = false;
			}
		}
	}
}

int main(){
	vector<bool> v(10000000, true);
	garbell(v, 10000000);
	int entrada;
	while (cin >> entrada) {
		if (v[entrada]) cout << entrada << " es primer" << endl;
		else cout << entrada << " no es primer" << endl;
	}
}
