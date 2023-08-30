#include <bits/stdc++.h>

using namespace std;

void Solve(int n)
{
	vector<int> a(n, 0);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] == 1) {
			a[i] = 2;
		}
	}
	for (int i = 1; i < n; ++i) {
		if (a[i] % a[i - 1] == 0) {
			++a[i];
		}
	}
	cout << a[0] << " ";
	for (int i = 1; i < n; ++i) {
		if (a[i] % a[i - 1] == 0) {
			++a[i];
		}
		cout << a[i] << ' ';
	}
	cout << endl;
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