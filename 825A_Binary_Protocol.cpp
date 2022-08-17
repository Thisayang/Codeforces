#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, cnt, ans = 0;
	string s;
	cin >> n >> s;
	FOR(i, 0, n) {
		if (s[i] == '1') {
			FOR(j, i, n) {
				if (s[j] == '1') ans ++, i ++;
				else break;
			}
			cout << ans;
			ans = 0;
		} else {
			cnt = 0;
			FOR(j, i, n) {
				if (s[j] == '0') cnt ++,i ++;
				else break;
			}
			FOR(j, 0, cnt - 1) cout << 0;
		}
		-- i;
	}
	if (s[n - 1] == '0') {
		cout << 0;
	}
	cout << endl;
	return 0;
}