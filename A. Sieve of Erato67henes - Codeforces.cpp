#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int n;
	cin >> n;
	
	bool found_67 = false;
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		if (a == 67) {
			found_67 = true;
		}
	}
	
	if (found_67) {
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
