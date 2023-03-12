#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a == c) {
		int ans = b - d;
		cout << a + ans << " " <<  b << " " << c + ans << " " << d << endl;
	} else if (b == d) {
		int ans = a - c;
		cout << a << " " <<  b + ans << " " << c << " " << d + ans << endl;
	} else if (abs(a - c) == abs(b - d)) {
		if ((a < c && b < d) || (a > c && b > d)) {
			cout << a << " " << d << " " << c << " " << b << endl; 
		} else {
			cout << min(a, c) << " " << min(b, d) << " " << max(a, c) << " " << max(b, d) << endl;
		}
	} else cout << -1 << endl;
	return 0;
}