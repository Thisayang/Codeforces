#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, t, c;
	cin >> n >> t >> c;
	vector<int> a(n);
	FOR(i, 0, n) {
		cin >> a[i];
	}
	int cnt = 0, ans = 0;
	FOR(i, 0, n) {
		if (a[i] <= t) {
			cnt ++;
		} else {
			if (cnt >= c) {
				ans += cnt - c + 1;
			} 
			cnt = 0;
		}
	}
	if (cnt >= c) {
		ans += cnt - c + 1;
	} 
	cout << ans << endl;
	return 0;
}