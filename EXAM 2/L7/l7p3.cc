#include <iostream>
using namespace std;

int main() {
	int n;
	int xulas = 0;
	int no_xulas = 0;
	while (cin >> n) {
		string s, s1, s2, s3;
		if (n%2 == 0) {
			no_xulas = no_xulas + 1;
			for (int i = 1; i <= n; i++) cin >> s;
		}
		
		else {
			for (int i = 1; i <= n; i++) {
				cin >> s;
				if (i == 1) s1 = s;
				if (i == n/2 + 1) s2 = s;
				if (i == n) s3 = s;
			}
			if (s1 == s2 and s2 == s3) xulas = xulas + 1;
			else no_xulas = no_xulas + 1;
		}
	}
	if (xulas > 0 and no_xulas > 0) cout << "dels dos tipus" << endl;
	else if (no_xulas > 0) cout << "cap de xula" << endl;
	else if (xulas > 0) cout << "totes xules" << endl;
}
