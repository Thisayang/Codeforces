#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, x, a, b, flg = 0;
	cin >> n >> x;
	int y = 7 - x;
	FOR(i, 0, n) {
		cin >> a >> b;
		if (a == x || a == y) flg = 1;
		if (b == x || b == y) flg = 1;
	}
	cout << (flg == 1 ? "NO" : "YES") << endl;
	return 0;
}