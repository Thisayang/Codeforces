#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
	int x;
	int y;
	int tx;
	int ty;
	int ans = -1;
	int flg = 0;
	cin >> x >> y;
	for (int i = 1; i < n; ++i) {
		cin >> tx >> ty;
		if (x <= tx && y <= ty)
			flg = 1;
	}
	return (flg == 0 ? x : -1);
}

int main(void)
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