#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
	vector<int> a(n);
	int tmp = 0;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (tmp <= a[i]) {
			tmp = a[i];
		} else {
			ans = max(tmp, ans);
		}
	}
	return ans;
}

int main(void)
{
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << Solve(n) <<endl;
	}
	return 0;
}