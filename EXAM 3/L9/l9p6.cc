#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Parell {
	int valor;                           // Diferent de zero
	int pos;                             // Més gran o igual que zero
};

typedef vector<Parell> Vec_Com;          // Ordenat per pos!

Vec_Com suma(const Vec_Com& v1, const Vec_Com& v2) {
	int i = 0;
	int j = 0;
	Parell suma;
	Vec_Com v3;
	while (i < v1.size() and j < v2.size()) {
		if (v1[i].pos == v2[j].pos) {
			suma.valor = v1[i].valor + v2[j].valor;
			if (suma.valor != 0) {
				suma.pos = i;
				v3.push_back(suma);
			}
			++i;
			++j;
			
		}
		else if (v1[i].pos < v2[j].pos) i = i + 1;
		else j = j + 1;
	}
	return v3;
}

void llegeix(Vec_Com& v) {
	int n;
	char comillas;
	cin >> n;
	for (int i = 0; i < n; i++) {
		Parell vector;
		cin >> vector.valor >> comillas >> vector.pos;
		v.push_back(vector);
	}
}

int main() {
	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		Vec_Com v1;
		Vec_Com v2;
		llegeix(v1);
		llegeix(v2);
		Vec_Com v3;
		if (v1.size() > 0 and v2.size() > 0){
			v3 = suma(v1, v2);
			cout << v3.size() << ' ';
			for (int j = 0; j < v3.size(); j++) {
				cout << v3[j].valor << ';' << v3[j].pos << ' ';
			}
		}
		else if (v1.size() <= 0 and v2.size() > 0){
			cout << v2.size() << ' ';
			for (int j = 0; j < v2.size(); j++) {
				cout << v2[j].valor << ';' << v2[j].pos << ' ';
			}
		}
		else {
			cout << v1.size() << ' '; 
				for (int j = 0; j < v1.size(); j++) {
				cout << v1[j].valor << ';' << v1[j].pos << ' ';
				}
		}
		cout << endl;
	}
}  
