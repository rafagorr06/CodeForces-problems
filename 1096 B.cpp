#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	int cont1=0;
	int cont2=0;
	
	for(size_t i=0; i<s.length();i++){
		if (s[i]=='('){
			cont1++;
		}
		if (s[i]==')'){
			cont2++;
		}
		}
	
	if(cont1==cont2){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}
