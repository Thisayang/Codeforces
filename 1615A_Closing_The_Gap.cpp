#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a, sum;
	cin >> t;
	while (t --) {
		cin >> n;
		sum = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a;
			sum += a;
		}
		cout << (sum % n == 0 ? 0 : 1) << endl;
	}
	return 0;
}