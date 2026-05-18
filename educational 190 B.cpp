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
	ll c0=0, c1=0, c2=0;
	ll cant_elim=0;
	for(size_t i=0;i<s.size();i++) { 
		if(s[i]=='4'){
			c0++; c1++; c2++;
		} 
		else if(s[i]=='1' or s[i]=='3'){
			c2++; 
			c1 = min(c1,c2);
		} 
		else if(s[i]=='2'){
			c0++;
			c1++;
			c1 = min(c1,c2);
		}
	}
	cant_elim = min({c0,c1,c2});
	cout << cant_elim << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}

