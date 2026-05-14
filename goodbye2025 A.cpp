// Autor: Rafael Gorrochategui
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)
void yes() {cout<<"YES"<<endl;}
void no() {cout <<"NO"<<endl;}

void solve() {
	string s; cin >> s;
	int pos_elim=0;
	
	for(size_t i=0;i<s.size()+1;i++) { 
		if(s[i]=='N'){
			pos_elim++;
		}
	}
	if(s.size()-pos_elim >= 2){
		no();
	} else {
		yes();
	}
	
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}

