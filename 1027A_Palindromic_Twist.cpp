#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string s;
	cin >> t;
	while (t --) {
		cin >> n >> s;
		reverse(s.begin(), s.end());
		string t = s;
		reverse(s.begin(), s.end());
		if (s == t) {
			cout << "YES" << endl;
		} else {
			int flg = 0;
			for (int i = 0; i < n; ++ i) {
				if (s[i] == t[i] || abs(s[i] - t[i]) == 2) {
					continue;
				} else {
					flg = 1;
					break;
				}
			}
			cout << (flg == 1 ? "NO" : "YES") << endl;
		}
	}
	return 0;
}