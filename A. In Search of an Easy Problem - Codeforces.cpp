#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

int main() {
	int n; cin >> n;
	
	vector<int>a(n);
	for (int i=0;i<n;i++){
		cin >> a[i];
	}
	
	bool encontrado=false;
	for (int i=0;i<n;i++){
		if(a[i]==1){
			encontrado=true;
			break;
		}
	}
	
	if(encontrado==false){
		cout<<"EASY"<<endl;
	}
	if(encontrado==true){
		cout<<"HARD"<<endl;
	}
	
	
	
	return 0;
	
}
