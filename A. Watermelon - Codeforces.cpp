#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

int main() {
	int w;
	cin >> w;
	
	if(w == 2){
		cout << "NO" << endl;
	} else {
		if (w%2 == 0){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
