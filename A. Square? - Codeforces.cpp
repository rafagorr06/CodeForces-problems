#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype> 

using namespace std;

void resolver() {
	int a, b , c, d;
	cin>>a>>b>>c>>d;
	if (a == b && b == c && c == d) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}

int main() {
	int t;
	cin >> t; 
	while (t--) {
		resolver();
	}
	return 0;
}
