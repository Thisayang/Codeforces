#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, cnt = 1, ans = 1;
	vector<int> a(100010);
	cin >> n >> k;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	for (int i = 1; i < n; ++ i) {
		if (a[i] != a[i - 1]) cnt ++;
		else {
			ans = max(cnt, ans);
			cnt = 1;
		}
	}
	ans = max(cnt, ans);
	cout << ans << endl;
	return 0;
}