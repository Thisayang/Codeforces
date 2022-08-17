#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, flg = 0;
	cin >> n;
	vector<int> a(n);
	FOR(i, 0, n) {
		cin >> a[i];
	}
	FOR(i, 0, n - 1) {
		if (a[i] & 1 && a[i + 1] == 0) {
			flg = 1;
			break;
		} else if (a[i] & 1 && a[i + 1] > 0) {
			a[i + 1] --;
		}
	}
	if (a[n - 1] & 1) flg = 1;
	cout << (flg == 0 ? "YES" : "NO") << endl;
	return 0;
}