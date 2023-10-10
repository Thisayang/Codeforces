#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.first > b.first;
}

int Solve(int n)
{
	vector<pair<int, int>> a(n);
	vector<int> ans(n, 0);
	for (int i = 0; i < n; ++i) {
		cin >> a[i].first;
		a[i].second = i;
	}
	sort(a.begin(), a.end(), cmp);
	for (int i = 0; i < n; ++i)
		ans[a[i].second] = i + 1;
	
	for (int i = 0; i < n; ++i)
		cout << ans[i] << " ";
	cout << endl;
	return 0;
}

int main(void)
{
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		Solve(n);
	}
	return 0;
}