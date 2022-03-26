#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string s;
	cin >> t;
	while (t --) {
		cin >> n >> s;
		vector<int> id;
		for (int i = 0; i < n; ++ i) {
			if (s[i] == '2') {
				id.push_back(i);
			}
		}
		int k = id.size();
		if (k == 1 || k == 2) {
			cout << "NO" << endl;
			continue;
		}
		vector<string> t(n, string(n, '='));
		for (int i = 0; i < n; ++ i) {
			t[i][i] = 'X'; 
		}
		for (int i = 0; i < k; ++ i) {
			int x = id[i], y = id[(i + 1) % k];
			t[x][y] = '+';
			t[y][x] = '-';
		}
		cout << "YES" << endl;
		for (int i = 0; i < n; ++ i) {
			cout << t[i] << endl;
		}
	}
	return 0;
}