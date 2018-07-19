#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> suma(1001,0);
  int s;
  for (int i = 1; i <= n; i++) {
    cin >> s;
    suma[s - 1000000000] = suma[s - 1000000000] + 1;
  }
  for (int i = 0; i <= 1000; i++) {
    if (suma[i] > 0) cout << 1000000000 + i << " : " << suma[i] << endl;
  }
}
    
    