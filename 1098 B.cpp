// Autor: Rafael Gorrochategui
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)
void yes() {cout<<"YES"<<endl;}
void no() {cout <<"NO"<<endl;}

void solve() {
	ll n, x1, x2, k; 
	cin >> n >> x1 >> x2 >> k;
	
	ll dist_jugadores;
	if(x1>x2){
		dist_jugadores = x1-x2;
	} else {
		dist_jugadores = x2-x1;
	}
	ll dist_mas_corta = min(dist_jugadores , n - dist_jugadores); 
	//el minimo entre sentido horario y antiohorario ya que el circulo se puede recorrer de las dos formas
	ll limite_escape = (n - dist_mas_corta) / 2;
	ll tiempo = dist_mas_corta + min(k, limite_escape);
	if (tiempo > n) {
		tiempo = n;
	}
	cout << tiempo << endl;
	
	//CHUPAME LA VERGA PRETEST 2 !!!!
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}

