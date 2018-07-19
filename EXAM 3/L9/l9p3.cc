#include <iostream>
#include <vector>
using namespace std;

struct Provincia {
  string nom;
  string capital;
  int habitants;
  int area;
  double pib;
};

struct Paisos {
  string nom;
  string capital;
  vector<Provincia> provs;
};

typedef vector<Pais> Paisos;

int habitants(const Paisos& p, double x) {
  int habit = 0;
  for (int i = 0; i < p.size(); i++) {
    int cont = 0;
    int j = 0;
    bool trobat = false;
    while (j < p[i].provs.size() and not trobat) {
      if (p[i].provs[j].pib <= x) count = count + 1;
      if (count == 2) trobat = true;
      j = j + 1;
    }
    if (trobat) {
      for (int p = 0; p < p[i].provs.size(); p++) {
	habit = habit + p[i].provs[j].habitants;
      } 
    }
      
  }
  return habit;
  
}
 
