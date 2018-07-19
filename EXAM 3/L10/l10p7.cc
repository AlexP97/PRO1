#include <iostream>
using namespace std;

int value(char c) {
	if (c == 'a' or c == 'e') return 1;
	else if (c == 'o' or c == 's') return 2;
	else if (c == 'i' or c == 'd' or c == 'r' or c == 'n') return 3;
	else if (c == 'c' or c == 'l' or c == 't' or c == 'u') return 4;
	else if (c == 'm' or c == 'p') return 5;
	else if (c == 'b' or c == 'f' or c == 'g' or c == 'h'or c == 'j' or c == 'q' or c == 'v'or c == 'x' or c == 'y' or c == 'z') return 6;
	else return 7;
}


int main() {
	char c;
	int suma = 0;
	while (cin >> c) {
		suma = value(c) + suma;
	}
	cout << suma << endl;
}

