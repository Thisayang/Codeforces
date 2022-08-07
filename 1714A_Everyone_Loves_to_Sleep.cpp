#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, h, m, a, b;
	cin >> t;
	while (t --) {
		cin >> n >> h >> m;
		int k = h * 60 + m, t = 1e9 + 10;
		FOR(i, 0, n) {
			cin >> a >> b;
			int q = a * 60 + b;
			int s = (q - k + 24 * 60) % (24 * 60);
			t = min(t, s);
		}
		cout << t / 60 << " " << t % 60 << endl;
	}
	return 0;
}