#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int k)
{
	if (n % k == 0) {
		if (k == 1) {
			return n;
		} else {
			return n / k + 1;
		}
	} else if (n % k == 1) {
		return n / k + 1;
	} else {
		return n / k + 2;
	}
}

int main()
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