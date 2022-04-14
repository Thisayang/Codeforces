#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, x, y;
	vector<int> a(100010);
	cin >> n >> x >> y;
	for (int i = 0; i < n; ++ i) {
		cin >> a[i];
	}
	for (int i = 0; i < n; ++ i) {
		int flg = 1;
		for (int j = 1; i - j >= 0 && j <= x; ++ j) {
			if (a[i - j] <= a[i]) {
				flg = 0;
				goto loop;
			}
		}
		for (int j = 1; i + j < n && j <= y; ++ j) {
			if (a[i + j] <= a[i]) {
				flg = 0;
				goto loop;
			}
		}
		loop: ;
		if (flg == 1) {
			cout << i + 1 << endl;
			break;
		}
	}
	return 0;
}