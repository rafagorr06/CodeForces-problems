#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	
	int sum = 0;
	bool ceros_consecutivos = false;
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}

	for (int i = 0; i < n - 1; i++) {
		if (a[i] == 0 && a[i+1] == 0) {
			ceros_consecutivos = true;
			break; 
		}
	}

	if (ceros_consecutivos || sum == n) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl; 
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}
