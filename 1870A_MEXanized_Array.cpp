#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int k, int x)
{
	if (k - x > 1 || n < k)
		return -1;
	if (x == k)
		return (k - 1) * k / 2 + (n - k) * (x - 1);
	return (k - 1) * k / 2 + (n - k) * x;
}

int main(void)
{
	int t;
	int n;
	int k;
	int x;
	cin >> t;
	while (t--) {
		cin >> n >> k >> x;
		cout << Solve(n, k, x) << endl;
	}
	return 0;
}