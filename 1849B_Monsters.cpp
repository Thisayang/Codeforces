#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.first == b.first)
		return a.second < b.second;
	return a.first > b.first;
}

int Solve(int n,int k)
{
	vector<pair<int, int>> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i].first;
		if (a[i].first % k == 0) {
			a[i].first = k;
		} else {
			a[i].first %= k;
		}
		a[i].second = i + 1;
	}
	sort(a.begin(), a.end(), cmp);
	for (int i = 0; i < n; ++i)
		cout << a[i].second << " ";
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