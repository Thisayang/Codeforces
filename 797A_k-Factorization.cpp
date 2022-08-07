#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k;
	cin >> n >> k;
	if (n < pow(2, k)) cout << -1 << endl;
	else {
		vector<int> x(n + 1, 0);
		x[1] = 1;
		FOR(i, 2, sqrt(n) + 1) {
			if (x[i] == 1) continue;
			for (int j = 2; i * j <= n; ++ j) {
				x[i * j] = 1;
			}
		}
		queue <int> a;
		while (n > 1) {
			FOR(i, 2, sqrt(n) + 1) {
				if (n % i == 0) {
					a.push(i);
					n /= i;
					break;
				}
			}
			if (x[n] == 0) {
				a.push(n);
				n = 0;
			}
		}
		if (a.size() >= k) {
			int cnt = 0, ans = 1;
			while(!a.empty()) {
				if (cnt != k - 1) {
					cout << a.front() << " ";
					cnt ++;
				} else {
					ans *= a.front();
				}
				a.pop();
			}
			cout << ans << endl;
		} else {
			cout << -1 << endl;
		}
	}
	return 0;
}