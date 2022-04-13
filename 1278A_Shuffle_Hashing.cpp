#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	string p, s;
	cin >> t;
	while (t --) {
		cin >> p >> s;
		int len = p.length(), len2 = s.length();
		if (len > len2) {
			cout << "NO" << endl;
		} else {
			map<char, int> m1, m2;
			for (int i = 0; p[i] != 0; ++ i) {
				m1[p[i]] ++;
			}
			int flg = 0;
			for (int i = 0; i + len <= len2; ++ i) {
				m2.clear();
				for (int st = i, j = 0; j < len; ++ j) {
					m2[s[st + j]] ++;
				}
				int ok = 1;
				for (int j = 0; j < 26; ++ j) {
					if (m1['a' + j] != m2['a' + j]) {
						ok = 0;
						break;
					}
				}
				if (ok == 1) {
					flg = 1;
					break;
				}
			}
			cout << (flg == 1 ? "YES" : "NO") << endl;
		}
	}
	return 0;
}