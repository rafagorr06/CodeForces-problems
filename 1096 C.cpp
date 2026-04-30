#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int n;
	cin>>n;
	
	vector<int> lista1, lista2, lista3, lista4;
	for (size_t i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x % 6 == 0) {
			lista1.push_back(x);
		} else if (x % 2 == 0) {
			lista2.push_back(x);
		} else if (x % 3 == 0) {
			lista3.push_back(x);
		} else {
			lista4.push_back(x);
		}
	}
	
	for (int x : lista1) cout << x << " "; //para cada x en lista 1
	for (int x : lista2) cout << x << " ";
	for (int x : lista4) cout << x << " "; // como en python!!
	for (int x : lista3) cout << x << " ";
	cout << endl;
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}
