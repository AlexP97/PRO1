#include <iostream>
using namespace std;

int main () {
  char c;
  int i = 0;
  int p = 0;
  int t = 0;
  while (cin >> c) i = i + 1;
  if (i % 2 == 0) {
    for (int k = 0; k <= i; k++){
      if (k <= k / 2){
	cin >> c;
	p = p + (c-'0');
      }
      else {
	cin >> c;
	t = t + (c - '0');
      }
    }
    if (p > t) cout << p << ' ' << '>' << ' ' << t << endl;
    else if (p < t) cout << p << ' ' << '<' << ' ' << t << endl;
    else cout << p << ' ' << '=' << ' ' << t << endl;
  }
  else cout << "res" << endl;

}
    

