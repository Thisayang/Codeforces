#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int m)
{
	int flg = 0;
	vector<vector<char>> a(n, vector<char> (m, 0));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j)
			cin >> a[i][j];	
	}
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			if (a[j][i] == 'v' && flg == 0) {
				flg = 1;
				break;
			} else if (a[j][i] == 'i' && flg == 1) {
				flg = 2;
				break;
			} else if (a[j][i] == 'k' && flg == 2) {
				flg = 3;
				break;
			} else if (a[j][i] == 'a' && flg == 3) {
				flg = 4;
				break;
			}
		}
	}
	return (flg == 4 ? 1 : 0);
}

int main(void)
{
	int t;
	int n;
	int m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		cout << (Solve(n, m) ? "YES" : "NO") << endl;
	}
	return 0;
}