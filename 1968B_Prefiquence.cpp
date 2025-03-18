#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int m) {
	string a;
	cin >> a;
	int cnt = 0;
	string b;
	cin >> b;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = cnt; j < m; ++j) {
			if (a[i] == b[j]) {
				++ans;
				cnt = j + 1;
				break;
			}
			++cnt;
		}
		if (cnt >= m) {
			break;
		}
	}
	cout << ans << endl;
	return 0;
}

int main(void) {
	int t;
	int n;
	int m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		Solve(n, m);
	}
	return 0;
}