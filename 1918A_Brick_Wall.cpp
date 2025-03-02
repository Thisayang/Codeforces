#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int m)
{
	if (m % 2 == 0) {
		return n * m / 2;
	} else {
		return n * m / 2 - n / 2;
	}
}

int main(void)
{
	int t;
	int n;
	int m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		cout << Solve(n, m) << endl;
	}
	return 0;
}