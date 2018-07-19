#include <iostream> 
using namespace std;

void info_sequencia(int& suma, int& ultim) {
	int n;
	cin >> n;
	if (n != 0) {
		suma = suma + n;
		ultim = n;
		info_sequencia(suma, ultim);
	}
	
}





int main() {
	int n;
	cin >> n;
	int sumain = n;
	int ultimin = n;
	info_sequencia(sumain, ultimin);
	int count = 1;
	while (cin >> n) {
		int suma = n;
		int ultim = n;
		if (n != 0) {
			info_sequencia(suma, ultim);
		}
		if (suma == sumain and ultim == ultimin) count = count + 1;
	}
	cout << count << endl;
}
