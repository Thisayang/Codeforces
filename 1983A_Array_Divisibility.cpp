#include <bits/stdc++.h>

using namespace std;

int Solve(int n) {
	for (int i = 1; i <= n; ++i) {
		cout << i << " ";
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