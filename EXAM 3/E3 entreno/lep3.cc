#include <iostream>
#include <string>
using namespace std;

void change(const string& T, string& s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'a' and s[i] <= 'z') {
			int suma = s[i] - 'a';
			if (T[suma] == 'L') {
				char minus = 'a' + suma;
				cout << minus;
			}
			else {
				char mayus = 'A' + suma;
				cout << mayus;
			}
		}
		else if (s[i] >= 'A' and s[i] <= 'Z') {
			int suma = s[i] - 'A';
			if (T[suma] == 'U') {
				char mayus = 'A' + suma;
				cout << mayus;
			}
			else {
				char minus = 'a' + suma;
				cout << minus;
			}
		}	
	}
}

void make_uppercase_lowercase(const string& T) {
	string s; 
	while (cin >> s) {
		change(T, s);
	}
	cout << endl;
}

int main() {
	string T; 
	cin >> T;
	make_uppercase_lowercase(T);
}
