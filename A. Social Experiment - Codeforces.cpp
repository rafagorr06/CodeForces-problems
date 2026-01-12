#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int n;
	cin >> n;
	
	if(n==2){
		cout << "2"<< endl;
	} else if (n==3){
		cout << "3" << endl;
	} else {
		cout << (n%2) << endl;
	}
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}
