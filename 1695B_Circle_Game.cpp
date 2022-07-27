#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[60];
	cin >> t;
	while (t --) {
		cin >> n;
		int mx1 = 1e9 + 10, mx2 = 1e9 + 10, cnt1 = 0, cnt2 = 1;
		for (int i = 0; i < n; ++ i) {
			cin >> a[i];
			if (i % 2 == 0 && mx1 > a[i]) {
				mx1 = a[i];
				cnt1 = i;
			} else if (i % 2 == 1 && mx2 > a[i]) {
				mx2 = a[i];
				cnt2 = i;
			}
		}
		if (n % 2 == 1) cout << "Mike" << endl;
		else {
			if (mx1 > mx2 || (mx1 == mx2 && cnt1 > cnt2)) cout << "Mike" << endl;
			else if (mx1 < mx2 || (mx1 == mx2 && cnt1 < cnt2)) cout << "Joe" << endl;
		}
	}
	return 0;
}