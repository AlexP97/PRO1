#include <iostream>
#include <vector>
using namespace std;

bool es_palindrom(const string& s) {
  int left = 0;
  int right = s.size() - 1;
  while (left < right) {
    if (s[left] != s[right]) return false;
    else {
      left = left + 1;
      right = right - 1;
    }
  }
  return true;
}
  

int main() {
  string s;
  cin >> s;
  cout << es_palindrom(s) << endl;
  
}