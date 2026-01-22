#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

int main() {
	int n, k;
	cin >> n >> k;
	
	vector<int>scores(n);
	int cont_adv =0;
	
	for(int i=0 ; i<n ; i++){
		cin>>scores[i];
	}
	
	for(int i=0 ; i<n ; i++){
		if(scores[i] >= scores[k-1] and scores[i]>0){
			cont_adv++;
		}
	}
	
	cout << cont_adv << endl;
}
