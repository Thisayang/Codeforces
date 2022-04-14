#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll n, a[200010];
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	ll sum = a[n - 1], flg = a[n - 1];
	for (int i = n - 2; i >= 0; -- i) {
		if (a[i] < flg) {
			sum += a[i];
			flg = a[i];
		} else if(flg > 0) {
			sum += flg - 1;
			flg = flg - 1;
		}
	}
	cout << sum << endl;
	return 0;
}