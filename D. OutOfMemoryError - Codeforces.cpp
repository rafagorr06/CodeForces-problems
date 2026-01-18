#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	int n, m;
	ll h;
	cin >> n >> m >> h;
	vector<ll> array(n);
	vector<ll> copy_array(n);
	for (int i = 0; i < n; i++){
		cin >> array[i];
		copy_array[i] = array[i];
	}
	
	int bi;
	ll ci;
	int contador = 0;
	vector<int> history;
	
	while(contador != m){
		cin >> bi >> ci;
		int idx = bi - 1;
		array[idx] += ci;
		history.push_back(idx);
		
		if (array[idx] > h){
			for(int i : history){
				array[i] = copy_array[i];
			}
			history.clear();
		} 
		contador++;
	}
	
	for (size_t i = 0; i < array.size(); i++){
		cout << array[i] << " ";
	}
	
	cout << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--) solve();
}
