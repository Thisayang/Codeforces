#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	if (b % m == 0) {
		if (b / m <= a) cout << min(n / m * b + n % m * a, n / m * b + b) << endl;
		else cout << n * a << endl;
	} else {
		double t = b * 1.0;
		if (t / m <= a) cout << min(n / m * b + n % m * a, n / m * b + b) << endl;
		else cout << n * a << endl;
	}
	return 0;
}