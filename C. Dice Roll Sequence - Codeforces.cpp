#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	
	const int INF = 1e9;
	
	vector<int> dp(7);
	for (int v = 1; v <= 6; ++v) {
		if (a[0] == v) {
			dp[v] = 0;
		} else {
			dp[v] = 1;
		}
	}
	
	for (int i = 1; i < n; ++i) {
		vector<int> next_dp(7, INF);
		for (int curr = 1; curr <= 6; ++curr) {
			int cost = (a[i] == curr) ? 0 : 1;
			for (int prev = 1; prev <= 6; ++prev) {
				if (curr != prev && curr + prev != 7) {
					next_dp[curr] = min(next_dp[curr], dp[prev] + cost);
				}
			}
		}
		dp = next_dp;
	}
	
	int ans = INF;
	for (int v = 1; v <= 6; ++v) {
		ans = min(ans, dp[v]);
	}
	cout << ans << "\n";

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}
