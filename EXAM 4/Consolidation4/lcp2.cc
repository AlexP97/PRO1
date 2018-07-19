#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp (int a, int b) {
	return a > b;
}

int main() {
	int n;
	while (cin >> n) {
		vector<int> parell(0);
		vector<int> senar(0);
		if (n != 0) {
			if (n%2 == 0) parell.push_back(n);
			else senar.push_back(n);
			cin >> n;
			while (n != 0) {
				if (n%2 == 0) parell.push_back(n);
				else senar.push_back(n);
				cin >> n;
			}
			bool primer = true;
			if (parell.size() != 0) {
				sort (parell.begin(), parell.end());
				for (int i = 0; i < parell.size(); i++) {
					if (not primer) cout << ' ';
					primer = false;
					cout << parell[i];
				}
			}
			cout << endl;
			primer = true;
			if (senar.size() != 0) {
				sort (senar.begin(), senar.end(), cmp);
				for (int i = 0; i < senar.size(); i++) {
					if (not primer) cout << ' ';
					primer = false;
					cout << senar[i];
				}
			}
			cout << endl;
		}
		else {
			cout << endl;
			cout << endl;
		}
	}
}
