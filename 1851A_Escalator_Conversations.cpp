#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int m, int k, int H)
{
	int ans = 0;
	int tmp;
	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		tmp = abs(tmp - H);
		if (tmp % k == 0 && tmp / k > 0 && tmp / k < m) {
			ans++;
		}
	}
	return ans;
}

int main()
{
	int t;
	int n;
	int m;
	int k;
	int H;
	cin >> t;
	while (t--) {
		cin >> n >> m >> k >> H;
		cout << Solve(n, m, k, H) << endl;
	}
	return 0;
}