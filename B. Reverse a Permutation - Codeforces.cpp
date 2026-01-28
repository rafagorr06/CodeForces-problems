#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int n;
	cin >> n;
	vector<int> p(n);
	for (int i = 0; i < n; ++i) {
		cin >> p[i];
	}
	
	int l = -1, r = -1;
	for (int i = 0; i < n; ++i) {
		int target = n - i;
		if (p[i] != target) {
			l = i;
			for (int j = i + 1; j < n; ++j) {
				if (p[j] == target) {
					r = j;
					break;
				}
			}
			break;
		}
	}
	
	if (l != -1) {
		reverse(p.begin() + l, p.begin() + r + 1);
	}
	
	for (int i = 0; i < n; ++i) {
		cout << p[i] << (i == n - 1 ? "" : " ");
	}
	cout << endl;
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}
