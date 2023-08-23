#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int k)
{
	vector<pair<int, int>> a(n);
	vector<int> b(n, 0);
	vector<int> ans(n, 0);
	for (int i = 0; i < n; ++i) {
		cin >> a[i].first;
		a[i].second = i;
	}
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
	}
	sort(b.begin(), b.end());
	sort(a.begin(), a.end());
	for (int i = 0; i < n; ++i) {
		ans[a[i].second] = b[i];
	}
	for (auto &i : ans) {
		cout << i << ' ';
	}
	cout << endl;
	return 0;
}

int main(void)
{
	int t;
	int n;
	int k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		Solve(n, k);
	}
	return 0;
}