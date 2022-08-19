#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, x, y, sum = 0, ans = -1;
	cin >> n;
	vector<int> a(n);
	FOR(i, 0, n) {
		cin >> a[i];
		sum += a[i];
	}
	cin >> m;
	FOR(i, 0, m) {
		cin >> x >> y;
		if (x <= sum && sum <= y)  {
			ans = sum;
			break;
		} else if (x >= sum) {
			ans = x;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}