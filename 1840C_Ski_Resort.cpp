#include <bits/stdc++.h>

using namespace std;

long long Solve(int n, int k, int q)
{
	long long ans = 0;
	long long cnt = 0;
	int tmp;
	for (int i = 0; i < n; ++ i) {
		cin >> tmp;
		if (tmp <= q) {
			++cnt;
		} else if(cnt >= k) {
			ans += (cnt - k + 1) * (cnt - k + 2) / 2;
			cnt = 0;
		} else {
			cnt = 0;
		}
	}
	if (cnt >= k)
		ans += (cnt - k + 1) * (cnt - k + 2) / 2;
	return ans;
}

int main(void)
{
	int t;
	int n;
	int k;
	int q;
	cin >> t;
	while (t--) {
		cin >> n >> k >> q;
		cout << Solve(n, k, q) << endl;
	}
	return 0;
}