#include <bits/stdc++.h>

using namespace std;

void solve(int n, int m) {
	string s[n];
	int cnt = 0;
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		cin >> s[i];
	}
	for (int i = 0; i < n; ++i) {
		int len = s[i].length();
		if (len + cnt <= m) {
			sum++;
			cnt += len;
		} else {
			break;
		}
	}
	cout << sum << endl;
	return ;
}

int main(void) {
	int t;
	int n;
	int m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		solve(n, m);
	}
	return 0;
}