#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
	vector<int> a(n), b(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n; ++i) {
		if ((a[i] % 2) != (b[i] % 2)) {
			return 1;
		}
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
		cout << (Solve(n) == 0 ? "YES" : "NO") << endl;
	}
	return 0;
}