#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a, b, c;
	while(cin >> a >> b >> c) {
		if (c == 0) {
			if (a == b) cout << "YES" << endl;
			else cout << "NO" << endl;
		} else {
			if ((b - a) % c == 0 && (b - a) / c >= 0) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}