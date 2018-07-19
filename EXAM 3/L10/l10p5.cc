#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Punt{
  int x, y, dist;
};

bool cmp (const Punt& a, const Punt& b) {
  if (a.dist < b.dist) return true;
  else if (a.dist > b.dist) return false;
  else if (a.x < b.x) return true;
  else if (a.x > b.x) return false;
  else if (a.y < b.y) return true;
  else return false;
}

int main() {
  Punt inicial;
  cin >> inicial.x >> inicial.y;
  int n, p1, p2;
  cin >> n;
  if (n > 0){
    vector<Punt> v(n);
    for (int i = 0; i < n; i++) {
      cin >> p1 >> p2;
      v[i].x = p1;
      v[i].y = p2;
      int dist1 = inicial.x - v[i].x;
      if (dist1 < 0) dist1 = -dist1;
      int dist2 = inicial.y - v[i].y;
      if (dist2 < 0) dist2 = -dist2;
      v[i].dist = dist1 + dist2;
    }
    sort(v.begin(), v.end(), cmp);
    int distancia = v[0].dist;
    cout << "punts a distancia " << distancia << endl;
    for (int i = 0; i < n; i++) {
      if (v[i].dist == distancia) {
	cout << v[i].x << ' ' << v[i].y << endl;
      }
      else {
	distancia = v[i].dist;
	cout << "punts a distancia " << distancia << endl;
	cout << v[i].x << ' ' << v[i].y << endl; 
      }
    }
  }    
  
    
}


