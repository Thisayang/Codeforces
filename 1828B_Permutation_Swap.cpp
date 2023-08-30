#include <bits/stdc++.h>

using namespace std;

int Maxdis(int a, int b)
{
	if (a < b) {
		return Maxdis(b, a);
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
	int ans = 0;
	int tmp;
	for (int i = 1; i <= n; ++i) {
		cin >> tmp;
		if (tmp != i) {
			if (ans == 0) {
				ans = abs(tmp - i);
			} else {
				ans = Maxdis(ans, abs(tmp - i));
			}
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