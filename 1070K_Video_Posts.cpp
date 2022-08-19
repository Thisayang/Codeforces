#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, sum = 0;
	cin >> n >> k;
	vector<int> a(n);
	FOR(i, 0, n) {
		cin >> a[i];
		sum += a[i];
	}
	if (sum % k == 0) {
		vector<int> ans;
		sum /= k;
		int cnt = 0, x = 0, num = 0, flg = 0;
		FOR(i, 0, n) {
			x += a[i];
			num ++;
			if (x == sum) {
				ans.push_back(num);
				num = 0;
				x = 0;
			} else if (x > sum) {
				flg = 1;
				break;
			}
		}
		if (flg == 0) {
			cout << "Yes" << endl;
			FOR(i, 0, ans.size()) cout << ans[i] << " ";
			cout << endl;
		} else cout << "No" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}