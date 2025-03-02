#include <bits/stdc++.h>

using namespace std;

int Solve(int n) {
	if (n == 1) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
		for (int i = 0; i < n && n != 1; ++i) {
			cout << "A";
		}
		cout << endl;
	}
	return 0;
}

int main(void) {
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		Solve(n);
	}
	return 0;
}