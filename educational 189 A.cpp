// !Z!
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int n;
	cin >> n;
	
	string estudiantes; cin >> estudiantes;
	int contador = 0;
	
	for(size_t i=0;i<estudiantes.size();i++) { 
		if(estudiantes[i]=='R'){
			contador++;
		} else {
			break;
		}
	}
	
	cout << contador+1 << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}

