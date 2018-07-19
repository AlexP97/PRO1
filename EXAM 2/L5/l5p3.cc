#include <iostream>
using namespace std;

void digit_maxim_i_minim(int n, int& maxim, int& minim) {
	maxim = n % 10;
	minim = n % 10;
	
	while (n > 9) {
		n = n / 10;
		if (n % 10 >= maxim) maxim = n % 10;
		if (n % 10 <= minim) minim = n % 10;
	}	
	if (n >= maxim) maxim = n;
	if (n <= minim) minim = n;
}






int main () {
	int n;
	int maxim;
	int minim;
	cin >> n;
	digit_maxim_i_minim(n, maxim, minim);
	cout << maxim << ' ' << minim << endl;
}
