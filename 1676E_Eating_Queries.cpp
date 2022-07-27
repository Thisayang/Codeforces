#include <bits/stdc++.h>
#define ll long long int
#define forn(i, a, n) for (int i = a; i < int(n); ++ i)
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, q, x;
	cin >> t;
	while (t --) {
		cin >> n >> q;
		vector<int> a(n), b(n, 0);
		set<int> sett;
		int sum = 0;
		forn(i, 0, n) {
			cin >> a[i];
			sum += a[i];
		}
		sort(a.rbegin(), a.rend());
		b[0] = a[0];
		for (int i = 1; i < n; ++ i) {
			b[i] = a[i] + b[i - 1];
		}
		forn(i, 0, q) {
			cin >> x;
			int l = 0, r = n - 1, ans = -1;
			while (l <= r) {
				int mid = (l + r) / 2;
				if (b[mid] >= x) {
					ans = mid;
					r = mid - 1;
				} else {
					l = mid + 1;
				}
			}
			cout << (ans == -1 ? -1 : ans + 1) << endl;
		}
	}
	return 0;
}