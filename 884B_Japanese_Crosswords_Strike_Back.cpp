#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, x, tmp, sum = 0;
	cin >> n >> x;
	FOR(i, 0, n) {
		cin >> tmp;
		sum += tmp;
	}
	if (x - sum == n - 1 || (n == 1 && sum == x)) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}