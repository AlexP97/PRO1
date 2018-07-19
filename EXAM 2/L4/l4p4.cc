#include <iostream>
using namespace std;

bool es_potencia_de_3(int n) {
  bool p;
  if (n > 0) { 
    while (n % 3 == 0) {
      n = n / 3;
    }
    if (n == 1) {
      p = true;
      return p;
    } 
    else {
      p = false;
      return p;
    }    
  }
  else {
    p = false;
    return p;
  }
}

int main () {
  int x;
  while (cin >> x) 
  cout << es_potencia_de_3(x) << endl;
}