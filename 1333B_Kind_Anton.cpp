#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int x[100010][3] = {0};
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	vector<int> a(100010), b(100010);
	cin >> t;
	while (t --) {
		cin >> n;
		x[0][0] = x[0][1] = x[0][2] = 0;
		x[1][0] = x[1][1] = x[1][2] = 0;
		for (int i = 1; i <= n; ++ i) {
			cin >> a[i];
			x[i + 1][0] = 0;
			x[i + 1][1] = 0;
			x[i + 1][2] = 0;
			if (a[i] == 0) x[i + 1][0] = 1;
			else if (a[i] == 1) x[i + 1][1] = 1;
			else  x[i + 1][2] = 1;
			x[i][0] += x[i - 1][0];
			x[i][1] += x[i - 1][1];
			x[i][2] += x[i - 1][2];
		}
		int flg = 0;
		for (int i = 1; i <= n; ++ i) {
			cin >> b[i];
			if (a[i] > b[i] && x[i][2] == 0) flg = 1;
			if (a[i] < b[i] && x[i][1] == 0) flg = 1;
		}
		cout << (flg == 0 ? "YES" : "NO") << endl;
	}
	return 0;
}