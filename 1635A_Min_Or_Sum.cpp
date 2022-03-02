#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	ll a[110];
	cin >> t;
	while (t --) {
		cin >> n;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		int sum = a[0];
		for (int i = 1; i <n; ++ i) {
			sum = sum | a[i];
		}
		cout << sum << endl;
	}
	return 0;
}