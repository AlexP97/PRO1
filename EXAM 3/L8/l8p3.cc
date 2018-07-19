#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  int sequencia;
  vector<int> sequence(n);
  for (int i = 0; i < n; i++){
    cin >> sequencia;
    sequence[i] = sequencia;
  }
  int posicio;
  vector<int> auxiliar(n);
  for (int i = 0; i < n; i++){
    cin >> posicio;
    auxiliar[posicio] = sequence[i];
  }
  bool first = false;
  for (int i = 0; i < n; i++) {
    if (not first) {
      cout << auxiliar[i];
      first = true;
    }
    else cout << ' ' << auxiliar[i];
  }
  cout << endl;
}
