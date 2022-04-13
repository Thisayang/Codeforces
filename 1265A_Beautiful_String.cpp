#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	string s;
	cin >> t;
	while (t --) {
		cin >> s;
		int flg = 0;
		for (int i = 1; s[i] != 0; ++ i) {
			if (s[i - 1] == s[i] && s[i] != '?') {
				flg = 1;
			}
		}
		if (flg == 1) cout << "-1" << endl;
		else {
			int len = s.length();
			for (int i = 0; i < len; ++ i) {
				if (s[i] == '?') {
					if (i == 0) {
						for (int j = 0; j < 3; ++ j) {
							if ('a' + j != s[i + 1]) {
								s[i] = 'a' + j;
								break;
							}
						}
					} else if (i == len - 1) {
						for (int j = 0; j < 3; ++ j) {
							if ('a' + j != s[i - 1]) {
								s[i] = 'a' + j;
								break;
							}
						}
					} else {
						for (int j = 0; j < 3; ++ j) {
							if ('a' + j != s[i - 1] && 'a' + j != s[i + 1]) {
								s[i] = 'a' + j;
								break;
							}
						}
					}
				}
			}
			cout << s << endl;
		}
	}
	return 0;
}