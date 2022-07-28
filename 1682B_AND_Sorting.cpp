#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		vector<int> a(n);
		int cnt = 0, ans = 0;
		FOR(i, 0, n) {
			cin >> a[i];
			if (a[i] != i && cnt == 0) ans = a[i], cnt ++;
			else if (a[i] != i) ans &= a[i];
		}
		cout << ans << endl;
	}
	return 0;
}