#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int n;
	cin >> n;
	map<int, int>m;
	for(size_t i=0 ; i<n ; i++){
		int a;
		cin>> a;
		m[a]++;
	}
	
	
	int cont = 0;
	for(auto x : m){
		
		int key = x.first;
		int f = x.second;
		
		if(key > f){
			cont+=f;
		}
		if(key < f){
			cont+=(f-key);
		}
		
	}
	
	cout << cont << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}
