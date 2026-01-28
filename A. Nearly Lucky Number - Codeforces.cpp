#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)


int main() {
	string n; cin>> n;
	
	int contador_ln = 0;
	for(auto i=0 ;i<n.size() ; i++){
		if (n[i]=='4' or n[i]=='7'){
			contador_ln++;
		}
	}
	
	if(contador_ln == 4 or contador_ln == 7){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	
	return 0;
}
