#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> sequence(n);
	for (int i = 0; i < n; i++) cin >> sequence[i];
	int count = 0;
	for (int i = 0; i < sequence.size(); i++) {
		bool trobat = false;
		for (int j = 0; j < sequence.size(); j++) {
			if (sequence[i] == 0 and sequence[j] == 0) trobat = true;
			else if (sequence[i] == - sequence[j]) trobat = true;
		}
		if (not trobat) count = count + 1;
	}
	cout << count << endl;
}
