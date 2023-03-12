#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		ll PSum = 0;
		ll NSum = 0;
		ll a;
		for (int i = 0; i < n; ++i) {
			cin >> a;
			if (a > 0) {
				PSum += a;
			} else {
				NSum += a;
			}
		}
		cout << abs(PSum + NSum) << endl;
	}
	return 0;
}