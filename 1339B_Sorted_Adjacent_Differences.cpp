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
		FOR(i, 0, n) {
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		int cnt = 0;
		for (int l = n / 2 - 1, r = n / 2; l >= 0 || r < n; ) {
			if (cnt % 2 == 0) {
				cout << a[r ++] << " ";
			} else {
				cout << a[l --] << " ";
			}
			cnt ++;
		}
		cout << endl;
	}
	return 0;
}