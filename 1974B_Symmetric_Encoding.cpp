#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	int n;
	string s;
	cin >> t;
	while (t--) {
		cin >> n >> s;
		string tmp = "";
		int cnt[26] = {0};
		for (int i = 0; i < n; ++i) {
			++cnt[s[i] - 'a'];
		}
		for (int i = 0; i < 26; ++i) {
			if (cnt[i] != 0) {
				tmp += 'a' + i;
			}
		}
		string ans = tmp;
		reverse(ans.begin(), ans.end());
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < tmp.length(); ++j) {
				if (s[i] == tmp[j]) {
					cout << ans[j];
				}
			}
		}
		cout << endl;
	}
	return 0;
}