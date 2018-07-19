#include <iostream>
using namespace std;

char complement(char c){
	if (c == 'A') return 'T';
	else if (c == 'T') return 'A';
	else if (c == 'G') return 'C';
	else return 'G';
}

int main () {
	char primera, segona, tercera;
	bool sequencia = false;
	cin >> primera;
	cin >> segona;
	while (sequencia == false){
		cin >> tercera;
		if (primera == 'T' and segona == 'A' and tercera=='G')
			sequencia = true;
		else if (segona == 'T' and tercera=='A') {
			primera = segona;
			segona = tercera;
		}
		else if (tercera =='T') {
			primera = tercera;
		}
		else if (tercera =='A') {
			segona = tercera;
		}
	}	
	if (sequencia == true){
		while (cin >> primera and sequencia == true) {
			cout << complement(primera);
			cout << endl;
		}
	}	
}
