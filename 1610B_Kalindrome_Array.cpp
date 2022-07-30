#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		int flg = 0, k, flg1 = 1, flg2 = 1;
		cin >> n;
		vector<int> a(n);
		FOR(i, 0, n) {
			cin >> a[i];
		}
		if (n == 1 || n == 2) {
			cout << "YES" << endl;
		} else {
			for (int i = 0, j = n - 1; i < j; ++ i, -- j) {
				if (a[i] != a[j] && flg == 0) {
					k = a[i];
					flg = 1;
					j ++;
				} else if (a[i] != a[j] && flg == 1) {
					if (a[i] == k) {
						j ++;
					} else if (a[j] == k){
						i --;
					} else {
						flg1 = 0;
						break;
					}
				}
			}
			flg = 0;
			for (int i = 0, j = n - 1; i < j; ++ i, -- j) {
				if (a[i] != a[j] && flg == 0) {
					k = a[j];
					flg = true;
					i --;
				} else if (a[i] != a[j] && flg == 1) {
					if (a[i] == k) {
						j ++;
					} else if (a[j] == k) {
						i --;
					} else {
						flg2 = 0;
						break;
					}
				}
			}
			cout << ((flg1 || flg2) ? "YES" : "NO") << endl; 
		}
	}
	return 0;
}