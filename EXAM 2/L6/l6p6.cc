#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double distancia(double x1, double y1, double x2, double y2) {
  double p = ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
  return sqrt(p);
}



int main () {
	cout.setf(ios::fixed);
	cout.precision(4);
	string lloc;
	double coord1, coord2, coord3, coord4, primer1, primer2;
	while (cin >> lloc) {
		double dist = 0;
		bool parar = false;
		cin >> primer1 >> primer2;
		coord1 = primer1;
		coord2 = primer2;
		while (not parar) {
			cin >> coord3 >> coord4;
			dist = dist + distancia(coord1, coord2, coord3, coord4);
			if (coord3 == primer1 and coord4 == primer2) parar = true;
			coord1 = coord3;
			coord2 = coord4;
		}
		cout << "Trajecte " << lloc << ": " << dist << endl;;
	}
}




  
  
