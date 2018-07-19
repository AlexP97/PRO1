#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct Punt {
  double x, y;
};

double distancia(const Punt& a, const Punt& b) {
  Punt p;
  p.x = a.x - b.x;
  p.y = a.y - b.y;
  return sqrt(p.x * p.x + p.y * p.y);

}

int main() {
  Punt a;
  Punt b;
  cin >> a.x >> a.y >> b.x >> b.y;
  cout << distancia(a,b) << endl;
  
}
