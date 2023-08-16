#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
	int a[n] = {0};
	cin >> a[0];
	int max = a[0];
	int flg = 0;
	int min = 1e9 + 10;
	for (int i = 1; i < n; ++i) {
		cin >> a[i];
		if (max > a[i]) {
			flg = 1;
		}
		max = max > a[i] ? max : a[i];
		min = min < (a[i] - a[i - 1]) ? min : (a[i] - a[i - 1]);
	}
	if (flg) {
		return 0;
	} else {
		return (min + 2) / 2;
	}
}

int main()
{
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << Solve(n) << endl;
	}
	return 0;
}