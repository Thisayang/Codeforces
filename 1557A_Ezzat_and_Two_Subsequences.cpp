#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n, x;
	cin >> t;
	while (t --) {
		cin >> n;
		ll sum = 0, max = -2e9;
		for (int i = 0; i < n; ++ i) {
			cin >> x;
			sum += x;
			if(x > max) max = x;
		}
		printf("%.9lf\n", max * 1.0 + (sum - max) * 1.0 / (n - 1));
	}
	return 0;
}
