#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int t;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
		int cnt[26] = {0};
		int ans = 0;
		for (int i = 0; i < s.length(); ++i) {
			if (cnt[s[i] - 'a'] == 0) {
				++ans;
			}
			cnt[s[i] - 'a']++;
			if (ans == 2) {
				char tmp = s[i];
				s[i] = s[0];
				s[0] = tmp;
			}
		}
		if (ans > 1) {
			cout << "YES" << endl;
			cout << s << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}