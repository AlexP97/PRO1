#include <iostream>
using namespace std;

int main (){
	cout.setf(ios::fixed);
	cout.precision(4);
	double x, t;
	cin >> x;
	double n = 1;
	double p = 0;
	
	while (cin >> t){
		p = p + (t * n);
		n = n * x;
	}
	cout << p << endl;
}	
	
	
