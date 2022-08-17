#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int b, g, n;
	cin >> b >> g >> n;
	if (n < min(b, g)) cout << n + 1 << endl;
	else if (n > max(b, g)) {
		cout << min(b, g) - (n - max(b, g)) + 1 << endl;
	}
	else cout << min(b, g) + 1 << endl;
	return 0;
}