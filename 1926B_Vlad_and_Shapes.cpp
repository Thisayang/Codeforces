#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		string s[n];
		for (int i = 0; i < n; ++i) {
			cin >> s[i];
		}
		int tmp = 0;
		for (int i = 0; i < n; ++ i) {
			int cnt = 0;
			for (int j = 0; j < n; ++j) {
				if (s[i][j] == '1') {
					++cnt;
				}
			}
			if (cnt == 0) {
				continue;
			}
			if (tmp == 0) {
				tmp = cnt;
				continue;
			}
			cout << (tmp == cnt ? "SQUARE" : "TRIANGLE") << endl;
			break;
		}
	}
	return 0;
}