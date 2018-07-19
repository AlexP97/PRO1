#include <iostream>
#include <string>
using namespace std;

void gira (int n) {
	string s;
	cin >> s;
	if (n > 0) {
		gira(n-1);
		cout << s << endl;
	}
}

int main() {
	int n;
	cin >> n;
	gira(n);
	
}
