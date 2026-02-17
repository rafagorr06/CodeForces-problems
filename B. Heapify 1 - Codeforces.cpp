#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int n;
	cin >> n;
	bool possible = true;
	for (int i = 1; i <= n; ++i) {
		int val;
		cin >> val;
		
		int temp_val = val;
		while (temp_val % 2 == 0) {
			temp_val /= 2;
		}
		
		int temp_idx = i;
		while (temp_idx % 2 == 0) {
			temp_idx /= 2;
		}
		
		if (temp_val != temp_idx) {
			possible = false;
		}
	}
	
	if (possible) {
		cout << "YES" << "\n";
	} else {
		cout << "NO" << "\n";
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}
