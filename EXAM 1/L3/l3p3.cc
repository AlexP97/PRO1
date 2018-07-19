#include <iostream>
using namespace std;

int main (){
	int x;
	int b = 0;
	int n = 0;
	cin >> x;
	for (int j = 1; j <= x; j++){
		for (int i = 1; i <= x; i++){
			char l;
			cin >> l;
			if (((i + j) % 2) == 0) b = b + l - '0';
			else n = n + l - '0';
		}
	}
	cout << b << '-' << n << " = " << b - n << endl;
}
