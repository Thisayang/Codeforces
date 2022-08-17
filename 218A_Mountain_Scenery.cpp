#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, cnt = 0;
	cin >> n >> k;
	vector<int> a(2 * n + 1);
	FOR(i, 0, 2 * n + 1) {
		cin >> a[i];
	}
	FOR(i, 0, 2 * n + 1) {
		if (i & 1) {
			if (a[i] - a[i - 1] > 1 && a[i] - a[i + 1] > 1 && cnt < k) {
				cout << a[i] - 1 << " ";
				cnt ++;
			}
			else cout << a[i] << " ";
		} else {
			cout << a[i] << " ";
		}
	}
	cout << endl;
	return 0;
}