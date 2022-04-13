#include <bits/stdc++.h>
#define ll long long int
using namespace std;
cmp(pair<int, int> a, pair<int, int> b) {
	return a.first < b.first;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k;
	pair<int, int> a[110];
	cin >> n >> k;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i].first;
		a[i].second = i + 1;
	}
	sort(a, a + n);
	int sum = 0, cnt = 0;
	queue<int> q;
	for (int i = 0; i < n; ++ i) {
		if (sum + a[i].first <= k) {
			cnt ++;
			sum += a[i].first;
			q.push(a[i].second);
		}
	}
	cout << cnt << endl;
	while(!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	return 0;
}