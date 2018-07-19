#include <iostream>
#include <vector>
using namespace std;

vector<double> interseccio(const vector<double>& v1, const vector<double>& v2) {
	vector<double> v3(0);
	int p = v1.size();
	int m = v2.size();
	int i = 0;
	int j = 0;
	while (i < p and j < m) {
		if (v1[i] == v2[j]) {
			bool trobat = false;
			for (int n = 0; n < v3.size(); n++) {
				if (v1[i] == v3[n]) trobat = true;
			}
			if (not trobat) v3.push_back(v1[i]);
			i++;
			j++;
		}
		else if (v1[i] > v2[j]) j++;
		else i++;
	}
	return v3;
}

int main() {
	int n;
	cin >> n;
	vector<double> v1(n);
	for (int i = 0; i < n; ++i) cin >> v1[i];
	int k;
	cin >> k;
	vector<double> v2(k);
	for (int i = 0; i < k; ++i) cin >> v2[i];
	vector<double> v3;
	v3 = interseccio(v1, v2);
	for (int i = 0; i < v3.size(); ++i) {
		if (i > 0) cout << ' ';
		cout << v3[i];
	}
	cout << endl;
}
