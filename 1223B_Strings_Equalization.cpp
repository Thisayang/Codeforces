#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int q;
	string s, t;
	cin >> q;
	while (q --) {
		cin >> s >> t;
		if (s == t) cout << "YES" << endl;
		else if (s.length() == 1 && s != t) cout << "NO" << endl;
		else {
			int len = s.length();
			int a[26] = {0}, b[26] = {0};
			for (int i = 0; i < len; ++ i) {
				a[s[i] - 'a'] ++;
				b[t[i] - 'a'] ++;
			}
			int flg = 0;
			for (int i = 0; i < 26; ++ i) {
				if (a[i] > 0 && b[i] > 0) {
					flg = 1;
					break;
				}
			}
			cout << (flg == 1 ? "YES" : "NO") << endl;
		}
	}
	return 0;
}