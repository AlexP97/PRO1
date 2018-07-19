#include <iostream>
using namespace std;

int main () {
	int x, y, z;
	cin >> x >> y;
	int p = 0;
	int i = 0;
	while (cin >> z) {
		if (z >= x and z <= y) p = p + z;
		else i = i + 1;
	}
	cout << "Sum Inside: " << p << endl;
	cout << "Num Outside: " << i << endl;
}
