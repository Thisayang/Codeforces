#include <bits/stdc++.h>
#define ll long long int
using namespace std;
pair<ll, int> a[200010];
bool cmp(pair<ll, int> a, pair<ll, int> b) {
	return a.first > b.first;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	vector<int> b(200010);
	while (t --) {
		cin >> n;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i].first;
			a[i].second = i;
		}
		sort(a, a + n, cmp);
		ll sum = 0, res = (n + 1) / 2;
		for (int i = 0, cnt = 0, cost = 1; i < n; ++ i) {
			sum += a[i].first * cost * 2;
			cnt ++;
			if (cnt == 2) {
				cnt = 0;
				b[a[i].second] = res + cost;
				cost ++;
			} else {
				b[a[i].second] = res - cost;
			}
		}
		cout << sum << endl;
		cout << res;
		for (int i = 0; i < n; ++ i) {
			cout  << " " << b[i];
		}
		cout << endl;
	}
	return 0;
}