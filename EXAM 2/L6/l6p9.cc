#include <iostream> 
using namespace std;

void intercalacio(int x, int y) {
	if (x >= 10 and y >= 0) {
		intercalacio(x/10, y/10);
		cout << x%10 << y%10;
	}
	else cout << x << y;
}
	

int main() {
	int x, y;
	while (cin >> x >> y) {
		if (x == 0) cout << y;
		else if (y == 0) cout << x << y;
		else intercalacio(x,y);
		
		cout << endl;
	}
}

