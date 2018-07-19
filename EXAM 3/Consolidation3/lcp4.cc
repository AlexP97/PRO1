#include <iostream>
#include <vector>
using namespace std;

struct Temps {
	int hora, minut, segon;
};

Temps resta(Temps& t2) {
	if (t2.segon < 0) {
		t2.segon = 59;
		--t2.minut; 
		if (t2.minut < 0) {
			t2.minut = 59;
			--t2.hora;
			if (t2.hora < 0) {
				t2.hora = 23;
			}
		}
	}
	return t2;
}

Temps suma(Temps& t1) {
	if (t1.segon == 60) {
		++t1.minut;
		t1.segon = t1.segon - 60;
			if (t1.minut == 60) {
			++t1.hora;
			t1.minut = t1.minut - 60;
			if (t1.hora == 24) {
				t1.hora = t1.hora - 24;
			}
		}
	}
	return t1;
}

void un_segon(const Temps& t, Temps& t1, Temps& t2) {
	t1.segon = t.segon + 1;
	t2.segon = t.segon - 1;
	t1 = suma(t1);
	t2 = resta(t2);	
}

int main() {
	Temps t;
	while (cin >> t.hora >> t.minut >> t.segon) {
		Temps t1 = t;
		Temps t2 = t;
		un_segon(t, t1, t2);
		cout << t1.hora << ' ' << t1.minut << ' ' << t1.segon << endl;
		cout << t2.hora << ' ' << t2.minut << ' ' << t2.segon << endl;
	}
}
	
