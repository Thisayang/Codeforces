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
		vector<int> a(n), b(n);
		int mnx = 0, mny = 0, mxx = 0, mxy = 0;
		FOR(i, 0, n) {
			cin >> a[i] >> b[i];
			if (a[i] > 0) mxx = max(mxx, a[i]);
			else if (a[i] < 0) mnx = max(mnx, abs(a[i]));
			if (b[i] > 0) mxy = max(mxy, b[i]);
			else if (b[i] < 0) mny = max(mny, abs(b[i]));
		}
		cout << (mxx + mnx) * 2 + (mxy + mny) * 2 << endl;
	}
	return 0;
}