#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
#define forall(it, v) for(auto it = v.begin(); it != v.end(); it++)

int main() {
	string s;
	cin >> s;
	
	set<char> distinct_chars;
	for (char c : s) {
		distinct_chars.insert(c);
	}
	
	if (distinct_chars.size() % 2 == 0) {
		cout << "CHAT WITH HER!" << endl;
	} else {
		cout << "IGNORE HIM!" << endl;
	}
	
	return 0;
}
