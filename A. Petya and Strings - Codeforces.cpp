#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

int main() {
	string s1, s2;
	cin >> s1 >> s2;

	for (int i = 0; i < s1.length(); i++) {
		s1[i] = tolower(s1[i]);
		s2[i] = tolower(s2[i]);
	}
	
	if (s1 < s2) {
		cout << "-1" << endl;
	} else if (s1 > s2) { 
		cout << "1" << endl;
	} else {
		cout << "0" << endl;
	}
	
	return 0;
}
