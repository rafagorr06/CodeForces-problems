#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

void solve() {
	string statement;
	cin >> statement;
	
	

}

int main() {
	int n;
	cin>>n;
	
	int X=0;
	
	for(int i=0 ; i<n ; i++){
		string statement;
		cin >> statement;
		
		if (statement == "++X" or statement == "X++"){
			X++;
		}
		if (statement == "--X" or statement == "X--"){
			X--;
		}
	}
	
	cout << X << endl;
	
	return 0;

}
	
