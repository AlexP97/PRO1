#include <iostream>
using namespace std;

bool es_guai(int n, int b) {
	int p;
	if (n < b) 
		return (n % 2 == 0);
	else {
		p = n % b;
		if (p % 2 == 0)
			return es_guai (n / b, b);
		else return false;	
	}
}
	
	int main() {
	int n, b;
	cin >> n >> b;
	cout << es_guai(n,b) << endl;
	
}
