#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
	vector<int> a(n);
	int flg = 0;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	for (int i = 1; i < n; ++ i) {
		if (a[i] > a[i - 1])
			flg = 1;
		if (a[i] < a[i - 1] && flg)
			return -1;
	}
	return 0;
}

int main(void)
{
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << (Solve(n) ? "NO" : "YES") << endl;
	}
	return 0;
}