#include <iostream>
using namespace std;

char atbash(char c) {
	int n;
	if (c >= 'a' and c <= 'z') n = c - 'a';
	else n = c - 'A';
	return ('Z' - n);	
}

void print_atbash_encipherment() {
	char c;
	while (cin >> c) {
		if (c != '#' and ((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z'))) {
			if ((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z')) {
				c = atbash(c);
				cout << c;
				cin >> c;
			}
	
		}
		else if (c != '#') {
			cin >> c;
		}
	
	}	
		
	cout << '#' << endl;
}

int main() {
	print_atbash_encipherment();
}

