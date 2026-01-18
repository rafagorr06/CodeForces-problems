#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int n;
	cin >> n;
	
	vector<int>arrA(n);
	for (int i=0 ; i<n ; i++){
		cin >> arrA[i];
	}
	
	sort(arrA.begin(),arrA.end());
	
	int racha = 1;
	int mex = 1;
	
	for (int i=1 ; i<n ; i++){
		if (arrA[i] == arrA[i-1]+1){
			racha++;
		} else if (arrA[i]==arrA[i-1]){
			continue; 
		} else {
			racha = 1;
		}
		
		if (racha > mex) {
			mex = racha;
		}
		
	}
	
	cout << mex << endl;
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}
