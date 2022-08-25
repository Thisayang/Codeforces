#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a[3], b[3], flg = 1;
	FOR(i, 0, 3) cin >> a[i];
	FOR(i, 0, 3) {
		cin >> b[i];
		if (a[i] == b[i]) flg = 0;
	}
	cout << (flg == 1 ? "NO" : "YES") << endl;
	return 0;
}