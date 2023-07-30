#include <bits/stdc++.h>

using namespace std;
void Print(int n, int x)
{
	for (int i = 0; i < n; ++ i) {
		cout << x << ' ';
	}
}

void Solve(int n, int k, int x)
{
	if (x != 1) {
		cout << "YES" << endl << n << endl;
		Print(n, 1);
		cout << endl;
	} else if (k == 1 || (k == 2 && n & 1)) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl << n / 2 << endl;
		if (n & 1) {
			Print(n / 2 - 1, 2);
			cout << 3 << endl;
		} else {
			Print(n / 2, 2);
			cout << endl;
		}
	}
	return;
}

int main()
{
	int t;
	int n;
	int k;
	int x;
	cin >> t;
	while (t--) {
		cin >> n >> k >> x;
		Solve(n, k, x);
	}
	return 0;
}