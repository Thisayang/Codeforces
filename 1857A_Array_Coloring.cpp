#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
	int odd = 0;
	int tmp;
	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		if (tmp & 1) {
			odd++;
		}
	}
	return (odd & 1);
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