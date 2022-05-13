#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	vector<int> a(100010);
	cin >> t;
	while (t --) {
		cin >> n;
		int cnt = 0, flg = 0, ans = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			if (a[i] == 1) cnt ++;
			else if (a[i] != 1 && flg == 0) {
				flg = 1;
				ans = cnt;
			}
		}
		if (flg == 0 && cnt % 2 == 1) cout << "First" << endl;
		else if (flg == 0 && cnt % 2 == 0) cout << "Second" << endl;
		else if (flg == 1 && ans % 2 == 1) cout << "Second" << endl;
		else if (flg == 1 && ans % 2 == 0) cout << "First" << endl;
	}
	return 0;
}