#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
	if (a < b) {
		return gcd(b, a);
	}
	while (a % b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return b;
}
int Solve(int n)
{
	int maxV = 0;
	vector<int> a(n, 0);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		maxV = max(maxV, a[i]);
	}
	int flg = a[0];
	for (int i = 1; i < n; ++i) {
		flg = gcd(flg, a[i]);
	}
	return maxV / flg;
}

int main(void)
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