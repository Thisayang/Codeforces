#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	vector<int> a(100010);
	cin >> n;
	int res = n;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	res += a[0];
	for (int i = 1; i < n; ++ i) {
		if (a[i] >= a[i - 1]) {
			res += a[i] - a[i - 1] + 1;
		} else {
			res += a[i - 1] - a[i] + 1;
		}
	}
	cout << res << endl;
	return 0;
}