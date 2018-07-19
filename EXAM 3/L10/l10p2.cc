#include <iostream>
#include <vector>
using namespace std;

vector<int> calcula_cims(const vector<int>& v) {
  vector <int> w;
  for (int i = 1; i < v.size() - 1; i++) {
    if (v[i - 1] < v[i] and v[i] > v[i + 1]) {
      w.push_back(v[i]);
    }
  }
  return w;
}

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];
  
  vector<int> w = calcula_cims(v);
  
  cout << w.size() << ":";
  for (int i = 0; i < w.size(); ++i) {
    cout << " " << w[i];
  }
  cout << endl;
  if (w.size() == 0) cout << "-" << endl;
  else {
        int ultim_pic = w[w.size() - 1];
        bool primer = true;
		bool trobat = false;
        for (int i = 0; i < w.size() - 1; ++i) {
            if (w[i] > ultim_pic) {
                if (primer) primer = false;
                else cout << " ";
                cout << w[i];
				trobat = true;
            }
            
        }
		if (not trobat) cout << '-';
        cout << endl;
  }
  }

/*
  int ultim_pic = w[w.size() - 1];
  if (w.size() > 0) {
    int ultim_pic = w[w.size() - 1]
    bool primer = false;
    for (int i = 0; i < w.size(); i++) {
      if (not primer) {
	cout << w[i];
	primer = true;
      }
      else cout << ' ' << w[i];
    }
    cout << endl;
    primer = false;
    bool trobat = false;
    for (int i = 0; i < w.size(); i++) {
      if (w[i] > ultim_pic and not primer) {
	cout << w[i];
	trobat = true;
	primer = true;
      }
      else if (w[i] > ultim_pic) cout << ' ' << w[i]; 
    }
    if (not trobat) cout << '-' << endl;
    else cout << endl;
  }
   else {
    cout << endl;
    cout << '-' << endl;
  }

  
}
*/  
