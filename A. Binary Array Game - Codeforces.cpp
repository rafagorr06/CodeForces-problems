#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int n;
	cin >> n;
	
	vector<int> a(n);
	int ceros = 0;
	
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i] == 0) ceros++;
	}
	
	if (ceros == 0) {
		cout << "Alice" << endl;
		return;
	}
	
	if (a[0] == 1 || a[n-1] == 1) {
		cout << "Alice" << endl;
	} else {
		cout << "Bob" << endl;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}
