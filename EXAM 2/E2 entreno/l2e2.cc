#include <iostream>
using namespace std;

char atbash(char c) {
	int n;
	if (c >= 'a' and c <= 'z') n = c - 'a';
	else n = c - 'A';
	return 'Z' - n;
}

void print_atbash_encipherment() {
	char c;
	while (cin >> c) {
		if (c != '#') {
			if ((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z')) {
				cout << atbash(c);
			}
		}
		else cout << '#' << endl;
	}
}

int main() {
	print_atbash_encipherment();
}
