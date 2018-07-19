#include <iostream>
#include <vector>
using namespace std;

void escriu_fals(const vector<bool>& v) {
  char c;
  for (int i = 0; i <= v.size() - 1; i++) {
    if (v[i] == false) {
      c = 'a' + i;
      cout << c << endl; 
    }
  } 
}

int main() {
  int n;
  cin >> n;
  string s, llarg;
  int cmpl;
  cin >> s;
  llarg = s;
  cmpl = s.size();
  vector<bool> v(26,false); 
  for (int i = 0; i < s.size(); i++){
    v[s[i] - 'a'] = true;
  }
  for (int t = 1; t < n; t++) {
    cin >> s;
    if (s.size() > cmpl) {
      llarg = s;
      cmpl = s.size();
    }
    
    for (int i = 0; i < s.size(); i++){
      v[s[i] - 'a'] = true;
    }
  }
  cout << llarg << endl;
  escriu_fals(v);
  
  
  
}






