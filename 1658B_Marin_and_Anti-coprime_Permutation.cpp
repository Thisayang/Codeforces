#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int  t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		if (n % 2 == 1) cout << 0 << endl;
		else {
			ll sum = 1;
			for (int i = 1; i <= n / 2; ++ i) {
				sum *= i;
				sum %= 998244353;
			}
			cout << sum * sum % 998244353 << endl;
		}
	}
	return 0;
}