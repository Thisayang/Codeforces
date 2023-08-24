#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int m)
{
	set<int> set;
	int tmp;
	for (int i = 0; i < m; ++i) {
		cin >> tmp;
		if (tmp > n) {
			set.insert(tmp);
		}
	}
	int ans = n - set.size();
	tmp = set.size();
	for (int i = 1; i <= n; ++i) {
		if (i <= ans) {
			cout << -1 << " ";
		} else {
			cout << tmp-- << " ";
		}
	}
	cout << endl;
	return 0;
}

int main(void)
{
	int t;
	int m;
	int n;
	cin >> t;
	while (t--) {
		cin >> m >> n;
		Solve(m, n);
	}
	return 0;
}