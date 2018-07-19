#include <iostream>
using namespace std;

void infoSequencia(int& max, int& lpos) {
	int n;
	int i = 0;
	cin >> n;
	while (n != 0) {
		i = i + 1;
		if (n > max) max = n;
		if (n == max) lpos = i;
		cin >> n;
	}
}

int main() {
	int max = 0;
	int lpos = 0;
	infoSequencia(max, lpos);
	int n;
	cin >> n;
	int pos2 = 1;
	while (n != max and n != 0) {
		cin >> n;
		pos2 = pos2 + 1;
	}	
	if (n == max) cout << max << ' ' << lpos << ' ' << pos2 << endl;
	else cout << max << ' ' << lpos << ' ' << '-' << endl;
}
