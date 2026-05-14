// Autor: Rafael Gorrochategui
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int a, b;
	cin >> a >> b;
	
	int anos = 0;
	
	while (a <= b){
		a = a*3;
		b=b*2;
		anos++;
	}
	
	cout << anos << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	solve();
}

