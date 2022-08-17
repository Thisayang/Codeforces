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
	vector<int> a(2 * n);
	FOR(i, 0, 2 * n) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	if (a[n] > a[n - 1]) flg = 1;
	cout << (flg == 1 ? "YES" : "NO") << endl;
	return 0;
}