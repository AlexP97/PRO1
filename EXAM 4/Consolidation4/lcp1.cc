#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp (int a, int b) {
	return a > b;
}

int main() {
	int n;
	while (cin >> n) {
		vector<int> v(n);
		for (int i = 0; i < n; i++) cin >> v[i];
		sort (v.begin(), v.end(), comp);
		bool primer = true;
		for (int i = 0; i < n; i++) {
			if (not primer) cout << ' ';
			primer = false;
			cout << v[i];
		}
		cout << endl;
	}
}
