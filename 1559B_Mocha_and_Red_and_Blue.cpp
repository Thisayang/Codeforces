#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		string s;
		cin >> n >> s;
		int flg = 1;
		for (int i = 0; i < n; ++ i) {
			if (s[i] != '?') {
				flg = 0;
				if (i - 1 >= 0 && s[i - 1] == '?') {
					if (s[i] == 'R') s[i - 1] = 'B';
					else s[i - 1] = 'R';
					i = i - 2;
				}
				if (i + 1 < n && s[i + 1] == '?') {
					if (s[i] == 'R') s[i + 1] = 'B';
					else s[i + 1] = 'R';
					i = i - 2;
				}
			}
		}
		if (flg) {
			for (int i = 0; i < n; ++ i) {
				if (i % 2) cout << 'R';
				else cout << 'B';
			}
			cout << endl;
		} else cout << s << endl;
	}
	return 0;
}