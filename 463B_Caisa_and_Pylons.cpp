#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, ans = 0, sum = 0;
	vector<int> a(100010);
	cin >> n;
	a[0] = 0;
	for (int i = 1; i <= n; ++ i) {
		cin >> a[i];
		if (a[i] > a[i - 1]) {
			int tmp = a[i] - a[i - 1];
			sum -= tmp;
			if (sum < 0) {
				ans += abs(sum);
				sum = 0;
			}
		} else {
			sum += a[i - 1] - a[i];
		}
	}
	cout << ans << endl;
	return 0;
}