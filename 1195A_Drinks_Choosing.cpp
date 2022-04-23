#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, t;
	vector<int> a(1010, 0);
	cin >> n >> k;
	for (int i = 0; i < n; ++ i) {
		cin >> t;
		a[t] ++;
	}
	sort(a.begin(), a.begin() + k + 1, cmp);
	int sum = (n + 1) / 2, ans = 0;
	for (int i = 0; i < k; ++ i) {
		int tmp = a[i] / 2;
		a[i] -= tmp * 2;
		if (tmp <= sum) {
			ans += tmp * 2;
			sum -= tmp;
		} else {
			ans += sum * 2;
			sum = 0;
		}
		if (sum == 0) break;
	}
	cout << ans + sum << endl;
	return 0;
}