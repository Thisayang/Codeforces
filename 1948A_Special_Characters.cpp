#include <bits/stdc++.h>

using namespace std;

int Solve(int n) {
	if (n % 2) {
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	for (int i = 0; i < n; i += 2) {
		cout << "AAB";
	}
	cout << endl;
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