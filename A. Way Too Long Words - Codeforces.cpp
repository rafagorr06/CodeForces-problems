#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	string palabra;
	cin >> palabra;
	
	if(palabra.size()>10){
		cout << palabra[0] << (palabra.size()-2) << palabra[palabra.size()-1] << endl;
	} else {
		cout << palabra << endl;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}
