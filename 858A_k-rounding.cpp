#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
ll gcd(ll a, ll b) {
	if (a < b) return gcd(b, a);
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n, k, s = 1;
	cin >> n >> k;
	for (int i = 0; i < k; ++ i) s *= 10;
	cout << n * s / gcd(n, s) << endl;
	return 0;
}