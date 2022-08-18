#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s, t;
	cin >> s;
	int flg = -1, cnt = 0, ans = 0;
	for (int i = 0, j = s.length() - 1; i < j; ++ i, -- j) {
		if (s[i] != s[j]) {
			if (s[i + 1] == s[j]) {
				flg = i;
				++ i;
			}
		}
	}
	if (flg == -1) {
		t = s.substr(0, s.length() / 2) + s[s.length() / 2] + s.substr(s.length() / 2);
	} else {
		int cnt = s.length() - flg;
		if (flg > s.length() / 2) {
			cnt --;
		} 
		t = s.substr(0, cnt) + s[flg] + s.substr(cnt);
	}
	string x = t;
	reverse(t.begin(), t.end());
	if (t != x) {
		ans ++;
		for (int i = 0, j = s.length() - 1; i < j; ++ i, -- j) {
			if (s[i] != s[j]) {
				if (s[j - 1] == s[i]) {
					flg = j;
					-- j;
				} 
			}
		}
		if (flg == -1) {
			t = s.substr(0, s.length() / 2) + s[s.length() / 2] + s.substr(s.length() / 2);
		} else {
			int cnt = s.length() - flg;
			if (flg > s.length() / 2) {
				cnt --;
			}	 
			t = s.substr(0, cnt) + s[flg] + s.substr(cnt);
		}
		x = t;
		reverse(t.begin(), t.end());
		if (t != x) ans ++;
	}
	cout << (ans > 1 ? "NA" : t) << endl;
	return 0;
}