#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, ans = 1e9 + 2000;
	cin >> n >> k;
	queue<int> q;
	for (int i = sqrt(n); i > 0; -- i) {
		if (n % i == 0) {
			int t = n / i;
			int tmp = k * i + t;
			if (tmp % k == t && tmp < ans) ans = tmp;
			tmp = k * t + i;
			if (tmp % k == i && tmp < ans) ans = tmp;
		}
	}
	cout << ans << endl;
	return 0;
}