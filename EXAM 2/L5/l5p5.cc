#include <iostream>
using namespace std;

bool es_primer(int y) {
	if (y <= 1) return false;
	for (int div = 2; div*div <= y; div++) {
		if (y % div == 0) return false;
	}
	return true;
}

bool es_primer_perfecte(int n){
	if (not es_primer(n)) return false;
	int x = 0;
	int y = 0;
	while (n > 0) {
		x = x + n % 10;
		n = n / 10;
		y = y + 1;
	}
	bool primer = es_primer(x);
	if (primer and y == 1) return true;
	else if (primer) return es_primer_perfecte(x);
	else return false;
	
		
}


int main () {
	int n;
	cin >> n;
	cout << es_primer_perfecte(n) << endl;
}
	
