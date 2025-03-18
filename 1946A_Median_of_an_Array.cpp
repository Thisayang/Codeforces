#include <bits/stdc++.h>

using namespace std;

int Solve(int n) {
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a + n);
	int cnt = n / 2;
	if (n % 2 == 0) {
		--cnt;
	}
	int flg = a[cnt];
	int ans = 1;
	for (int i = cnt + 1; i < n; ++i) {
		if (flg == a[i]) {
			++ans;
			continue;
		}
		break;
	}
	cout << ans << endl;
	return 0;
}

int main(void) {
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		Solve(n);
	}
	return 0;
}