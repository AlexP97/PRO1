#include <iostream>
#include <vector>
using namespace std;


void Jaccard (const vector<int>& a, const vector<int>& b){
	vector<int> u; //Vector unió
	vector<int> i; //Vector intersecció
	for(int j = 0; j < a.size(); ++j){
		for(int k = 0; k < b.size(); ++k){
			if(a[j]==b[k]) i.push_back(a[k]); //Si el número està als dos vectors ficarlo al nou vector intersecció
			}
		}
	cout << i.size()/u.size();
	}

int main(){
	cout.setf(ios::fixed); cout.precision(3);
	int m;
	while(cin >> m){
		vector<int> a(m);
		for(int i = 0; i < m; ++i) cin >> a[i]; //Fica el primer conjunt a un vector
		int n;
		cin >> n;
		vector<int> b(n);
		for(int i = 0; i<m;++i) cin >> b[i]; //Fica el segon conjunt a un altre vector
		Jaccard (a, b);
		}
}
