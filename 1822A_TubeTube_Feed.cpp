#include <bits/stdc++.h>

using namespace std;

void Solve(int n, int d)
{
	int a[n];
	int b[n];
	int ans = -1;
	int min = -1;
	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
	}
	for (int i = 0; i < n; ++i) {
		if (cnt + a[i] <= d && min < b[i]) {
			min = b[i];
			ans = i + 1;
		}
		cnt++;
	}
	cout << ans << endl;
	return;
}


int main()
{
	int t;
	int n;
	int d;
	scanf("%d", &t);
	while (t--) {
		cin >> n >> d;
		Solve(n, d);
	}
	return 0;
}