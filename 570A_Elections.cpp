#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, a[110], b[110] = {0};
	cin >> n >> m;
	FOR(i, 0, m) {
		int flg = 0, mx = 0;
		FOR(j, 0, n) {
			cin >> a[j];
			if (a[j] > mx) {
				mx = a[j];
				flg = j;
			}
		}
		b[flg] ++;
	}
	int ans = 0, cnt = b[0];
	FOR(i, 1, n) {
		if (cnt < b[i]) {
			cnt = b[i];
			ans = i;
		}
	}
	cout << ans + 1 << endl;
	return 0;
}