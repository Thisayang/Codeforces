#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int k)
{
	int ans = 0;
	int a;
	int b;
	vector<int> x(n - 1, 0);
	cin >> a;
	for (int i = 1; i < n; ++i) {
		cin >> b;
		x[i - 1] = abs(a - b);
		a = b;
	}
	sort(x.begin(), x.end());
	for (int i = 0; i < n - k; ++i) {
		ans += x[i];
	}
	return ans;
}

int main()
{
	int t;
	int n;
	int k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		cout << Solve(n, k) << endl;
	}
	return 0;
}