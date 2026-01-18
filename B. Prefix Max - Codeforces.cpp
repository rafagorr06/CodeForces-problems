#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int n;
	cin >> n;
	
	vector<int>array(n);
	for (int i=0 ; i<n ; i++){
		cin >> array[i];
	}
	
	auto max = max_element(array.begin(),array.end());
	int maximo = *max;
	cout <<  maximo * n << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}
