#include <bits/stdc++.h>

using namespace std;

int Solve(int k) {
	if (k % 3 == 1) {
		cout << "YES" << endl;
		return 0;
	}
	cout << "NO" << endl;
	return 0;
}

int main(void) {
	int t;
	int k;
	cin >> t;
	while (t--) {
		cin >> k;
		Solve(k);
	}
	return 0;
}