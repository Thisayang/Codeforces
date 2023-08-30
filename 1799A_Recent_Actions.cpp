#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int m)
{
	set<int> st;
	vector<int> a(n + 1, 0);
	vector<int> ans(n + 1, -1);
	int tmp;
	for (int i = 1; i <= n; ++i) {
		a[i] = i;
		st.insert(i);
	}
	for (int i = 1; i <= m; ++i) {
		cin >> tmp;
		if (st.count(tmp)) {
			swap(tmp, a[1]);
		} else {
			a.insert(a.begin(), tmp);
			st.insert(tmp);
			st.erase(a.back());
			if (a.back() <= n) {
				ans[a.back()] = i;
			}
			a.pop_back();
		}
	}
	for (int i = 1; i <= n; ++i) {
		cout << ans[i] << (i != n ? " " : "\n");
	}
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