#include <bits/stdc++.h>

using namespace std;

void Solve(void) {
	int n;
	string s;
	cin >> n >> s;
	int ans = 0;
	if (s[0] != s[n - 1]) {
		ans = 1;
	}
	cout << (ans ? "YES" : "NO") << endl;
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