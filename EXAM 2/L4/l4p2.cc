#include <iostream>
using namespace std;

int sum_min_max(int x, int y, int z){
  int p;
  if (x >= y and x >= z and y <= z) {
    p = x + y;
    return p;
  }
  else if (x >= y and x >= z and y > z) {
    p = x + z;
    return p;
  }
  else if (y > x and y >= z and x >= z) {
    p = z + y;
    return p;
  }
  else if (y > x and y >= z and x < z) {
    p = x + y;
    return p;
  }
  else if (z > x and z > y and y >= x) {
    p = x + z;
    return p;
  }
 else {
    p = y + z;
    return p;
  }
}
int main () {
  int x, y, z, n;
  cin >> x >> y >> z;
  n = sum_min_max(x, y, z);
  cout << n << endl;
}