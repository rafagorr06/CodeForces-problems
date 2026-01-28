#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int n;
	cin >> n;
	vector<ll> espadas(n);
	for (int i = 0; i < n; ++i) cin >> espadas[i];
	vector<ll> costos(n);
	for (int i = 0; i < n; ++i) cin >> costos[i];
	
	sort(espadas.begin(), espadas.end(), greater<ll>());
	
	vector<ll> acumulado(n);
	acumulado[0] = costos[0];
	for (int i = 1; i < n; ++i) {
		acumulado[i] = acumulado[i-1] + costos[i];
	}
	
	ll puntaje_maximo = 0;
	
	for (int i = 0; i < n; ++i) {
		ll dificultad = espadas[i];
		ll espadas_usadas = i + 1;
		
		auto it = upper_bound(acumulado.begin(), acumulado.end(), espadas_usadas);
		ll niveles = distance(acumulado.begin(), it);
		
		puntaje_maximo = max(puntaje_maximo, dificultad * niveles);
	}
	
	cout << puntaje_maximo << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}
