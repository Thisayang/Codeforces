#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int k, sum = 0, ans = 0;
	string s;
	vector<int> a(10, 0);
	cin >> k >> s;
	FOR(i, 0, s.length()) {
		sum += s[i] - '0';
		a[s[i] - '0'] ++;
	}
	int tmp = k - sum, flg = 0;
	while (tmp > 0) {
		if (a[flg] > 0) {
			int cnt = min((tmp + (8 - flg)) / (9 - flg), a[flg]);
			ans += cnt;
			tmp -= (9 - flg) * cnt;
		} 
		flg ++;
	}
	cout << ans << endl;
	return 0;
}