#include <iostream>
#include <vector>

using namespace std;

int main(){
	// Hago un vector con todo el abecedario para hacer un 'translate' despu�s.
	vector<char> abecedario(26);
	char letra = 'a';
	for (int i = 0; i < 26; ++i) {
		abecedario[i] = letra;
		++letra;
	}
	vector<char> traduccion(26);
	string s;
	while (cin >> s) {
		// Metemos toda la parte que nos ayuda a traducir en un vector.
		for (int i = 0; i < 26; ++i) traduccion[i] = s[i];
		int k;
		cin >> k;   // lineas a traducir
		/*  Bueno, esta es la parte dif�cil de entender. Aqu� lo que se hace es buscar dentro del vector traduccion
		el elemento que es igual a una de las tantas letras introducidas (una string es un vector de chars...).
		Todo ello para sacar as� el �ndice de esa posici�n.
		Esto implica que, al estar ordenado el vector traducci�n (de 'a' a 'z'),pueda usar el mismo indice para
		el vector abecedario.
		Una vez se introduce ese mismo �ndice en el vector abecedario devuelve la letra "traducida". Magic. */
		for (int i = 0; i < k; ++i) {
			string entrada;
			cin >> entrada;
			for (int j = 0; j < entrada.size(); ++j) {
				if (entrada[j] == '_') cout << ' ';
				else {
					bool encontrado = false;
					int m = 0;
					while (not encontrado) {
						if (traduccion[m] == entrada[j]) encontrado = true;
						else ++m;
					}
					cout << abecedario[m];
				}
			}
			cout << endl;
		}
		cout << endl;
	}
}
