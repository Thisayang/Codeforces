#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		if (n % 2 == 0) {
			FOR(i, 1, n / 2) cout << i * 2 << " " << i * 2 - 1 << " ";
			cout << n - 1 << " " << n << endl;
		} else {
			cout << n - 1 << " ";
			ROF(i, n - 3, 0) cout << i << " ";
			cout << n - 2 << " " << n << endl;
		}
		
	}
	return 0;
}