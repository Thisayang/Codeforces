#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
	int ans = 2;
	int cnt = 0;
	int tmp;
	int flg = 0;
	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		if (tmp == 0) {
			cnt++;
		} else if (tmp > 1) {
			flg = 1;
		}
	}
	if (cnt <= (n + 1) / 2) {
		ans = 0;
	} else if (flg == 1 || cnt == n) {
		ans = 1;
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