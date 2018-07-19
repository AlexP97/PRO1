#include <iostream>
using namespace std;

int mcd(int a, int b) {
  if (b == 0) return a;
  else {
  int n = a % b;
  a = b;
  b = n;
  return mcd (a,b);
  }
  
}

int main () {
	int a, b;
	while (cin >> a >> b)
	cout << mcd(a, b) << endl;
}	