#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int k)
{
	int cnt = 0;
	int tmp;
	for (int i = 1; i <= n; ++i) {
		cin  >> tmp;
		if (abs(tmp - i) % k != 0) {
			++cnt;
		}
	}
	if (cnt == 0) {
		return 0;
	} else if (cnt == 2) {
		return 1;
	}
	return -1;
}

int main(void)
{
	int t;
	int n;
	int k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		cout << Solve(n, k) << endl;
	}
	return 0;
}