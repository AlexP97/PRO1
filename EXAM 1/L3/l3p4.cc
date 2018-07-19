#include <iostream>
using namespace std;

int main () {
	int n, m;
	while (cin >> n >> m){
		int t = 9;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				cout << t;
				t = t - 1; 
				if (t < 0) t = t + 10; 
			}
			cout << endl;	
		}	
		cout << endl;
	}	
}
