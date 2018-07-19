#include <iostream>
#include <vector>
using namespace std;

char lletra_mes_frequent(const string& s) {
  
}


int main() {
  cout.setf(ios::fixed);
  cout.precision(2); 
  double n;
  cin >> n;
  vector<string> sequencia(n);
  string s;
  cin >> s;
  sequencia[0] = s;
  double suma = s.size();
  for (int i = 1; i < n; i++) {
    cin >> s;
    suma = suma + s.size();
    sequencia[i] = s;
 
  }
  cout << suma/n << endl;
  for (int i = 0; i < n; i++) {
	cout << lletra_mes_frequent(sequencia[i]) << endl;
  }
  
    
  
  
  
  
}





