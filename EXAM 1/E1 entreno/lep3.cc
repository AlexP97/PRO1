#include <iostream>
using namespace std;

int main () {
	int x, y;
	int suma = 0;
	while (cin >> x){
		cin >> y;
		for (int i = 1; i < x; i++){
			int z;
			cin >> z;
			if (z % 2 == 0) suma = suma + y;
			y = z; 
		}
		cout << suma << endl;
		suma = 0;
	}
		
}
