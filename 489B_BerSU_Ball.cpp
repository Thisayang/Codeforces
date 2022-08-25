#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, cnt = 0, ans = 0;
	cin >> n;
	vector<int> a(n);
	FOR(i, 0, n) cin >> a[i];
	cin >> m;
	vector<int> b(m);
	FOR(i, 0, m) cin >> b[i];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	FOR(i, 0, n) {
		FOR(j, cnt, m) {
			if (abs(a[i] - b[j]) <= 1) {
				ans ++;
				cnt = j + 1;
				break;
			} else if (a[i] - b[j] < -1) break;
		}
	}
	cout << ans << endl;
	return 0;
}