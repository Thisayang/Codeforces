#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int k, d;
	cin >> k >> d;
	if (d == 0) {
		if (k == 1) cout << 0 << endl;
		else cout << "No solution" << endl;
	} else {
		if (k == 1) cout << d << endl;
		else {
			cout << 1;
			FOR(i, 0, k - 2) cout << 0;
			cout << d - 1 << endl;
		}
	}
	return 0;
}