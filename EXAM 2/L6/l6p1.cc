#include <iostream>
using namespace std;

int main () {
    string ant, act;
    cin >> ant >> act;
    while (ant < act) {
      cout << ant << endl;
      ant = act;
      cin >> act; 
    }  
    while (act != "END") {
      if (ant < act) {
	cout << ant << endl;
	ant = act;
      }
      else cout << act << endl;
      cin >> act;
      }
    cout << ant << endl;
}