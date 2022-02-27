#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		int a[2] = {0}, flg = 0;
		for (int i = 1; i <= n; ++ i) {
			cin >> a[i % 2];
			if (a[i % 2] < a[1 - i % 2]) flg = 1;
		}
		cout << (flg ? "YES" : "NO") << endl;
	}
	return 0;
}