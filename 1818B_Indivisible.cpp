#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
	if (n > 1 && n % 2 == 1) {
		cout << -1 << endl;
	} else if (n == 1) {
		cout << 1 << endl;
	} else {
		for (int i = 2; i <= n; i += 2) {
			cout << i << " " << i - 1 << " ";
		}
		cout << endl;
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
		Solve(n);
	}
	return 0;
}