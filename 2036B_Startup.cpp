#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int Solve(int n, int k) {
	int b;
	int c;
	int cnt[k + 1] = {0};
	int ans = 0;
	for (int i = 0; i < k; ++i) {
		cin >> b >> c;
		cnt[b] += c;
	}
	sort(cnt, cnt + k + 1, cmp);
	for (int i = 0; i < k && i < n; ++i) {
		ans += cnt[i];
	}
	cout << ans << endl;
	return 0;
}

int main(void) {
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