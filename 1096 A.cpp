#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int x, y;
	cin >> x >> y;

	if (x%2 == 0 or y%2==0){
		cout << "YES"<<endl;
	} else {
		cout << "NO"<<endl;
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}
