#include <iostream>
using namespace std;

// Pre: paràmetre implícit (entrada: llista de paraules acabada en fi)
// Post: escriure la llista que hi ha a l'entrada del revés.
void gira() {
  string s;
  cin >> s;
  if (s != "fi"){
  gira ();
  cout << s << endl;
  }
  
  
}

int main() {
    gira(); // E: hola que tal fi
}