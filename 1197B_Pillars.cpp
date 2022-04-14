#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	vector <int> a(200010);
	cin >> n;
	for (int i = 0; i < n; ++ i) cin >> a[i];
	int flg = 0;
	for (int i = 0; i < n; ++ i) {
		if (a[i] == n) {
			for (int l = i - 1, r = i + 1, ok = n; l >= 0 || r < n; ) {
				if (l >= 0 && a[l] == ok - 1) {
					l --;
					ok --;
				} else if (r < n && a[r] == ok - 1) {
					r ++;
					ok --;
				} else {
					flg = 1;
					goto over;
				}
			}
			break;
		}
	}
	over: ;
	cout << (flg == 0 ? "YES" : "NO") << endl;
	return 0;
}