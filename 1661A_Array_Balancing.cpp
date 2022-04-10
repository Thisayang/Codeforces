#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int fun(int a, int b, int c, int d) {
	return abs(a - b) + abs(c - d);
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	vector <ll> a(30), b(30);
	cin >> t;
	while (t --) {
		cin >> n;
		ll sum = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		for (int i = 0; i < n; ++ i) {
			cin >> b[i];
		}
		for (int i = 1; i < n; ++ i) {
			if(fun(a[i - 1], a[i], b[i - 1], b[i]) > fun(a[i - 1], b[i], b[i - 1], a[i])) {
				swap(a[i], b[i]);
			}
			sum += fun(a[i - 1], a[i], b[i - 1], b[i]);
		}
		cout << sum << endl;
	}
	return 0;
}