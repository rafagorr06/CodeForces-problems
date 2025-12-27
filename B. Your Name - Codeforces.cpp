
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype> 

using namespace std;

void resolver() {
	int n;
	cin >> n;
	string s, t;
	cin >> s >> t;
	
	for (int i = 0; i < n; i++) {
		s[i] = tolower(s[i]);
		t[i] = tolower(t[i]);
	}
	sort(s.begin(), s.end());
	sort(t.begin(), t.end());
	
	if (s.size() == t.size() && s == t) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}

int main() {
	int q;
	cin >> q; 
	while (q--) {
		resolver();
	}
	return 0;
}
