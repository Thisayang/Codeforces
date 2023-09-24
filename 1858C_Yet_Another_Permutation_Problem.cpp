#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
	vector<int> a(n + 1, 0);
	for (int i = 1; i <= n; ++i) {
		if (a[i] == 0) {
			cout << i << " ";
			a[i] = 1;
			int tmp = 2 * i;
			while (tmp <= n) {
				cout << tmp << " ";
				a[tmp] = 1;
				tmp *= 2;
			}
		}
	}
	cout << endl;
	return 0;
}

int main()
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