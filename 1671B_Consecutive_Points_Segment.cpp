#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	vector<int> a(200010);
	cin >> t;
	while (t --) {
		cin >> n;
		int flg = 0, cnt = 0;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
		}
		if (n != 1) {
			if (a[n - 1] - a[0] > n + 1) flg = 1; 
		}
		cout << (flg == 0 ? "YES" : "NO") << endl;
	}
	return 0;
}