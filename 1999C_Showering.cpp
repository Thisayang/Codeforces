#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	int n;
	int s;
	int m;
	cin >> t;
	while (t--) {
		cin >> n >> s >> m;
		int st;
		int end;
		int tmp = 0;
		int ans = 0;
		for (int i = 0; i < n; ++i) {
			cin >> st >> end;
			if (st - tmp >= s) {
				ans = 1;
			}
			tmp = end;
		}
		if (m - tmp >= s) {
			ans = 1;
		}
		cout << (ans ? "YES" : "NO") << endl;
	}
	return 0;
}