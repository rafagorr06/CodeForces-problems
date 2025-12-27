#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

void resolver() {
	int n;
	cin >> n;
	vector<int> a(n);
	int impares = 0;
	int pares = 0;
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] % 2 == 0) pares++;
		else impares++;
	}
	if (pares > 0 && impares > 0) {
		sort(a.begin(), a.end());
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		resolver();
	}
	return 0;
}
