#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for (int i = 1; i < n; ++i) {
		if (a[0] != a[i]) {
			cout << i << ' ' << n - i << endl;
			for (int j = 0; j < n; ++j) {
				if (j == i) cout << endl;
				cout << a[j] << ' ';
			}
			cout << endl;
			return 0;
		}
	}
	cout << "-1" << endl;
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
}