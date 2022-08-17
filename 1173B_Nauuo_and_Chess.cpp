#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	cout << (n + 2) / 2 << endl;
	FOR(i, 1, n + 1) {
		if (i & 1) cout << (i + 1) / 2 << " " << (i + 1) / 2 << endl;
		else cout << i / 2 << " " << i / 2 + 1 << endl;
	}
	return 0;
}