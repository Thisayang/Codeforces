#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
	int ans = 0;
	int tmp = 0;
	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		if (tmp == -1) {
			cnt++;
		}
	}
	for (int i = 0; i <= n; ++i) {
		if (cnt - i <= (n - (cnt - i)) && (cnt - i) % 2 == 0) {
			ans = i;
			break;
		}
	}
	return ans;
}

int main()
{
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << Solve(n) << endl;
	}
	return 0;
}