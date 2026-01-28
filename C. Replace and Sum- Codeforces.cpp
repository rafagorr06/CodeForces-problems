#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int n, q;
	cin >> n >> q;
	
	vector<int> a(n), b(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++) cin >> b[i];
	
	vector<int> suf(n);
	for(int i = 0; i < n; i++) {
		suf[i] = max(a[i], b[i]);
	}
	
	for(int i = n - 2; i >= 0; i--) {
		suf[i] = max(suf[i], suf[i+1]);
	}
	
	vector<ll> pref(n + 1, 0);
	for(int i = 0; i < n; i++) {
		pref[i+1] = pref[i] + suf[i];
	}
	
	for(int i = 0; i < q; i++) {
		int l, r;
		cin >> l >> r;
		cout << (pref[r] - pref[l-1]) << (i == q - 1 ? "" : " ");
	}
	cout << "\n";
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}
