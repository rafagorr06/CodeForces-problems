#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

int main() {
	ll n, m, a;
	cin >> n >> m >> a;
	
	ll tiles_n = (n + a - 1) / a;
	ll tiles_m = (m + a - 1) / a;
	ll total = tiles_n * tiles_m;
	
	cout << total << endl;
	
	return 0;
}
