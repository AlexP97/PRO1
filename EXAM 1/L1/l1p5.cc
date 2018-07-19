#include <iostream>
using namespace std;

int main () {
	char c, h;
	cin >> c >> h;
	if (c == 'V' and h == 'A') cout << '1' << endl;
	else if (c == 'V' and h == 'P') cout << '2' << endl;
	else if (c == 'P' and h == 'V') cout << '1' << endl;
	else if (c == 'A' and h == 'V') cout << '2' << endl;
	else if (c == 'P' and h == 'A') cout << '2' << endl;
	else if (c == 'A' and h == 'P') cout << '1' << endl;
	else cout << '-' << endl;
	
}
