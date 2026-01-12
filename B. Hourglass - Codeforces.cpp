#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int s, k, m;
	cin >> s >> k >> m;
	
	int intervalos = m / k;
	int resto = m % k;
	
	if (s > k && intervalos % 2 != 0) {
		cout << k - resto << "\n";
	} else {
		cout << max(0, s - resto) << "\n";
	}
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}
