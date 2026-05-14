#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	ll x, y;
	cin >> x >> y;
	
	if (y == 2 * x) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
	}


}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}
