#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int n, k;
	cin >> n >> k;
	
	for (int i = 0; i <= 30; i++) {
		int p = 1 << i; 
		if (p > n) break; 

		int chico = n / p;          
		int grande = (n + p - 1) / p; 
		
		if (k == chico || k == grande) {
			cout << i << endl;
			return;
		}
	}
	
	cout << -1 << endl;
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}
