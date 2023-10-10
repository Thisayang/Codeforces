#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int a, int q)
{
	char ch;
	int flg = 0;
	int cnt = 0;
	int tmp = a;
	for (int i = 0; i < q; ++i) {
		cin >> ch;
		if (tmp == n)
			flg = 1;
		if (ch == '+') {
			++cnt;
			++tmp;
		} else {
			--tmp;
		}
		
	}
	if (flg == 1 || tmp == n) {
		return 1;
	} else if (a + cnt >= n) {
		return 0;
	} else {
		return -1;
	}
}

int main(void)
{
	int t;
	int n;
	int a;
	int q;
	cin >> t;
	while (t--) {
		cin >> n >> a >> q;
		int ret = Solve(n, a, q);
		cout << (ret > 0 ? "YES" : (ret == 0 ? "MAYBE" : "NO")) << endl;
	}
	return 0;
}