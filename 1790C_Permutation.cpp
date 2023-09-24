#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
	vector<vector<int>> a(n, vector<int>(n - 1, 0));
	vector<int> cnt(n + 1, 0);
	int tmp;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n - 1; ++j)
			cin >> a[i][j];
	}
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i == n - 2 && cnt[a[j][i]] == 0)
				tmp = a[j][i];
			cnt[a[j][i]]++;
			if (cnt[a[j][i]] == n - 1 && a[j][i] != tmp)
				cout << a[j][i] << " ";
		}
	}
	cout << tmp << endl;
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