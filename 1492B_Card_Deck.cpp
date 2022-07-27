#include <bits/stdc++.h>
#define ll long long int
#define forn(i, a, n) for (int i = a; i < int(n); ++ i)
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		vector<int> a(n, 0), b(n + 1, 0);
		forn(i, 0, n) {
			cin >> a[i];
		}
		int mx = n;
		for (int i = n - 1, j = n; i >= 0; -- i) {
			if (a[i] != mx) {
				b[a[i]] = 1;
			} else {
				b[mx] = 1;
				for (int st = i; st < j; ++ st) {
					cout << a[st] << " ";
				}
				for (int st = mx - 1; st > 0; -- st) {
					if (b[st] == 0) {
						mx = st;
						break;
					}
				}
				j = i;
			}
		}
		cout << endl;
	}
	return 0;
}