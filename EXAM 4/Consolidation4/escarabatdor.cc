#include <iostream>
#include <string>
using namespace std;

int main(){
	string alfabet;
	while (cin >> alfabet){
		int n;
		cin >> n;
		for (int j = 0; j < n; ++j){
			char c;     //caracter a desencriptar
			while (cin >> c){
				if (c != '_'){
					bool trobat = false;
					int k = 0;
					while (not trobat){ //busquem el caracter dins de l'alfabet que hem entrat
						if (c == alfabet[k]) {
							cout << char('a' +k);
							trobat = true;
						}
						++k;
					}
				} else cout << " ";
			}
			cout << endl;
		}
	}
}
