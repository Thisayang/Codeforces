#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int k) {
	cout << (n - 1) * k + 1 << endl;
	return 0;
}

int main(void) {
	int t;
	int n;
	int k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		Solve(n, k);
	}
	return 0;
}