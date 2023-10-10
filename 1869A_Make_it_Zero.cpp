#include <bits/stdc++.h>

using namespace std;

void Solve(int n)
{
	vector<int> a(n);
	int x = 0;
	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] == 0)
			++cnt;
		x ^= a[i];
	}
	if (cnt == n) {
		cout << 0 << endl;
		return ;
	}
	if (x == 0) {
		cout << 1 << "\n1 " << n << endl;
		return ;
	}
	if (n % 2 == 0) {
		cout << 2 << endl;
		cout << "1 " << n << "\n1 " << n << endl;
	} else {
		cout << 4 << endl;
		cout << "2 " << n << "\n2 " << n << endl;
		cout << "1 " << 2 << "\n1 " << 2 << endl;
	}
	return ;
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