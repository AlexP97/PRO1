#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(vector<char> v1, vector<char> v2) {
	if (v1.size() != v2.size()) return false;
	else {
		for (int i = 0; i < v1.size(); i++) {
			if (v1[i] != v2[i]) return false;
		}
		return true;
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		vector<char> v1(0);
		vector<char> v2(0);
		char c;
		cin >> c;
		while (c != '.') {
			if (c >= 'A' and c <= 'Z') {
				v1.push_back(c);
			}
			cin >> c;
		}
		cin >> c;
		while (c != '.') {
			if (c >= 'A' and c <= 'Z') {
				v2.push_back(c);
			}
			cin >> c;
		}
		sort (v1.begin(), v1.end());
		sort (v2.begin(), v2.end());
		if (comp(v1, v2)) cout << "SI" << endl;
		else cout << "NO" << endl;
	}
}
