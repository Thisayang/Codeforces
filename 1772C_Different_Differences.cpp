#include <bits/stdc++.h>

using namespace std;

int Solve(int k, int n)
{
	for (int i = 1, tmp = 0, cnt = 1; cnt <= k; ++cnt) {
		if (i + tmp <= n && n - (i + tmp) >= k - cnt) {
			cout << i + tmp << " ";
			i += tmp;
			++tmp;
		} else {
			cout << ++i << " ";
		}
	}
	cout << endl;
	return 0;
}

int main(void)
{
	int t;
	int k;
	int n;
	cin >> t;
	while (t--) {
		cin >> k >> n;
		Solve(k, n);
	}
	return 0;
}