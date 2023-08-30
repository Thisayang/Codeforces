#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
	int ans = 0;
	int min;
	int tmp;
	cin >> min;
	for (int i = 1; i < n; ++i) {
		cin >> tmp;
		if (tmp % (2 * min - 1) == 0) {
			ans += tmp / (2 * min - 1) - 1;
		} else {
			ans += tmp / (2 * min - 1);
		}
	}
	return ans;
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