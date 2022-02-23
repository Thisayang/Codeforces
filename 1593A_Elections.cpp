#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while (t --) {
		int a[3], max, cnt = 0, flg = 0;
		for (int i = 0; i < 3; ++ i) {
			cin >> a[i];
			if (i == 0) max = a[i];
			else max = max > a[i] ? max : a[i];
		}
		for (int i = 0; i < 3; ++ i) {
			if(max == a[i]) ++ cnt;
		}
		if (cnt > 1) flg = 1;
		for (int i = 0; i < 3; ++ i) {
			if (a[i] == max) {
				if (flg) cout << 1 << " ";
				else cout << 0 << " ";
			}
			else cout << max + 1 - a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
