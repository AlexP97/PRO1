#include <iostream>
using namespace std;

int main (){
	int x;
	cin >> x;
	int h = x;
	int g = x;
	for (int j = 1; j <= x - 1; j++){
		for (int k = 1; k <= g - 1; k++)
			cout << ' ';
		for (int i = 1; i <= h; i++){
			cout << 'X';
		}
		h = h + 2;
		g = g - 1;
		cout << endl;
	}
	for (int j = 1; j <= x; j++){
		for (int i = 1; i <= h; i++){
		cout << 'X';
		}
		cout << endl;
	}
	h = h - 2;
	g = g + 1;
	while (h >= x) {
		for (int j = 1; j <= x - 1; j++){
			for (int k = 1; k <= g - 1; k++)
				cout << ' ';
				for (int i = 1; i <= h; i++){
					cout << 'X';
				}
			cout << endl;
			h = h - 2;	
			g = g + 1;
		}
	}
	
}
