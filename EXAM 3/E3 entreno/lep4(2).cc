#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> sequence(n);
	for (int i = 0; i < n; i++) cin >> sequence[i];
	int count = 0;
	int i = 0;
	int j = n - 1;
	while (i < j) {
		if (- sequence[i] > sequence[j]) {
			count = count + 1;
			i = i + 1; 
		}
		else if (- sequence[i] < sequence[j]) {
			count = count + 1;
			j = j - 1;
		}
		else {
			i = i + 1;
			j = j - 1;
		}
	}
	if (i == j and sequence[j] != 0) count = count + 1;
	cout << count << endl;
}
