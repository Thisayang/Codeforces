#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, sum = 0, a, b;
	cin >> n >> k;
	FOR(i, 0, n) {
		cin >> a >> b;
		sum += b - a + 1;
	}
	cout << (k - (sum % k)) % k << endl;
	return 0;
}