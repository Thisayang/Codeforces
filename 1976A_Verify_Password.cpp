#include <bits/stdc++.h>

using namespace std;

void Solve(void) {
	int n;
	string s;
	cin >> n >> s;
	int tmp = n;
	int cnt = 0;
	for (int i = 1; i < n; ++i) {
		if (isdigit(s[i]) && islower(s[i - 1])) {
			cout << "NO" << endl;
			return ;
		}
		if (islower(s[i]) && isdigit(s[i - 1])) {
			tmp = i;
		}
	}
	for (int i = 0; i < tmp - 1; ++i) {
		if (s[i] > s[i + 1]) {
			cout << "NO" << endl;
			return ;
		}
	}
	for (int i = tmp; i < n - 1; ++i) {
		if (s[i] > s[i + 1]) {
			cout << "NO" << endl;
			return ;
		}
	}
	cout << "YES" << endl;
	return ;
}

int main(void) {
	int t;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}