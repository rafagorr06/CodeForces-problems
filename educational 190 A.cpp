// Autor: Rafael Gorrochategui
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)
void yes() {cout<<"YES"<<endl;}
void no() {cout <<"NO"<<endl;}

void solve() {
	ll n, a, b;
	cin >> n >> a >> b;
	
	ll precio=0;
	if(3*a <= b){
		precio += (n*a);
	} else {
		ll cant_grupales = n/3;
		ll restantes = n%3;
		precio += (cant_grupales * b);
		if (restantes == 2){
			precio += min(2*a,b);
		} else if (restantes == 1){
			precio += min(a,b);
		};
	}
	
	cout << precio << endl;
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}

