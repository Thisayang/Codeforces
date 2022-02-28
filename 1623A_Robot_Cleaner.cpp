#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m, rb, cb, rd, cd;
	cin >> t;
	while (t --) {
		cin >> n >> m >> rb >> cb >> rd >> cd;
		int cnt = 205;
		if (rb > rd) cnt = min(cnt, n - rb + n - rd);
		else cnt = min(cnt, rd - rb);
		if (cb > cd) cnt = min(cnt, m - cb + m - cd);
		else cnt = min(cnt, cd - cb);
		cout << cnt << endl;
	}
	return 0;
}