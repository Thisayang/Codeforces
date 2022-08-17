#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, a, ans = 0;
	cin >> n >> k;
	queue<int> q;
	FOR(i, 0, n) {
		cin >> a;
		if (a <= k) {
			if (q.size() == 0) q.push(k);
			else {
				ans ++;
				q.pop();
			}
		} else {
			if (a % (2 * k) == 0) ans += (a / (k * 2));
			else if (a - (a / (k * 2) * (k * 2)) > k) ans += (a / (k * 2)) + 1;
			else {
				ans += (a / (k * 2));
				if (q.size() == 0) q.push(k);
				else {
					ans ++;
					q.pop();
				}
			}
		}
	}
	if (q.size() > 0) ans += (q.size() + 1) / 2;
	cout << ans << endl;
	return 0;
}