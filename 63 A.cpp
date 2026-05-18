// Autor: Rafael Gorrochategui
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)
void yes() {cout<<"YES"<<endl;}
void no() {cout <<"NO"<<endl;}

void solve() {
	int n; cin >> n;
	vi xi(n), yi(n), zi(n);
	for(size_t i=0;i<n;i++) { 
		cin >> xi[i];
		cin >> yi[i];
		cin >> zi[i];
	}

	int suma_x=0, suma_y=0 , suma_z=0;
	for(size_t i=0;i<n;i++){
		suma_x += xi[i];
		suma_y += yi[i];
		suma_z += zi[i];
	}
	
	if (suma_x==0 and suma_y==0 and suma_z==0){
		yes();
	} else {
		no();
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve();
}

