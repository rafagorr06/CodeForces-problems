#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int n, s, x;
	cin >> n >> s >> x;

	vector<int>arr(n);
	int sum=0;
	for (int i=0 ; i<n ; i++){
		cin>> arr[i];
		sum += arr[i];
	}
	
	if (sum <= s && (s - sum) % x == 0) {
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
