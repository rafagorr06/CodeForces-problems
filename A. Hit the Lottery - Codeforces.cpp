#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

#include <iostream>

int main() {
	int n;
	cin >> n;
	
	int bills = 0;
	
	int denominations[] = {100, 20, 10, 5, 1};
	
	for (int coin : denominations) {
		bills += n / coin; 
		n %= coin;         
	}
	
	cout << bills << endl;
	
	return 0;
}
