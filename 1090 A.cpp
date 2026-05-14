// !Z!
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	ll x;
	cin >> x;
	
	if (x > 0){
		cout << x+1 << endl;
	};
	if (x < 0){
		cout << x-1 << endl;
	}
	
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}

