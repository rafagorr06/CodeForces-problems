// Autor: Rafael Gorrochategui
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)
void yes() {cout<<"YES"<<endl;}
void no() {cout <<"NO"<<endl;}

void solve() {
	ll n;
	cin >> n;
	
	vector<int>valores(n);
	ll contador0=0, contador1=0, contador2=0;
	for(size_t i=0;i<n;i++) { 
		cin >> valores[i];
		if (valores[i]==0){contador0++;}
		if (valores[i]==1){contador1++;}
		if (valores[i]==2){contador2++;}
	}
	
	ll operaciones=0;
	operaciones += contador0;
	ll aux = min(contador1,contador2);
	operaciones += aux;
	contador1 -= aux;
	contador2 -= aux;
	
	operaciones += contador1/3;
	operaciones += contador2/3;
	
	cout << operaciones << endl;
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}

