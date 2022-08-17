#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
struct man {
	char sex;
	int a, b;
};
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, ans = 0;
	cin >> n;
	man m;
	vector<int> a(367, 0), b(367, 0);
	FOR(i, 0, n) {
		cin >> m.sex >> m.a >> m.b;
		if (m.sex == 'M') {
			FOR(j, m.a, m.b + 1) {
				a[j] ++;
			}
		} else {
			FOR(j, m.a, m.b + 1) {
				b[j] ++;
			}
		}
	}
	FOR(i, 1, 367) {
		ans = max(min(a[i], b[i]) * 2, ans);
	}
	cout << ans << endl;
	return 0;
}