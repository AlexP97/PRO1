#include <iostream>
using namespace std;

int main () {
	int x, y, z;
	cin >> x >> y >> z;
	if (x >= y and x >= z and y >= z) cout << x + z << endl;
	else if  (y >= x and y >= z and x >= z) cout << y + z << endl;
	else if  (z >= x and z >= y and x >= y) cout << y + z << endl;	
	else if (x >= y and x >= z and y <= z) cout << x + y << endl;
	else if  (y >= x and y >= z and x <= z) cout << y + x << endl;
	else cout << x + z << endl;
}
