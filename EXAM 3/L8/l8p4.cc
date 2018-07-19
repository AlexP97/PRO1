#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, p, k;
  char c;
  cin >> n >> p >> k >> c;
  string s;
  vector<string> paraules(n);
  for (int i = 0; i < n; i++) {
    cin >> s;
    paraules[i] = s;
  }
  int incr;
  bool first = false;
  if (c == 'd') incr = 1;
  else incr = -1;
  while (k > 0) {
    p = (p + incr + n) % n;    
    if (not first) {
      cout << paraules [p];
      first = true;
    }
    else cout << ' ' << paraules [p];
    k = k - 1;
    
  }
  cout << endl;
}
    
    
