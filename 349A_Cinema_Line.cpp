#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, flg = 0, a;
	cin >> n;
	int sum = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0;
	for (int i = 0; i < n; ++ i) {
		cin >> a;
		if (a == 50 && sum >= 25 && cnt1 > 0) {
			cnt2 ++;
			cnt1 --;
			sum += 25;
		} else if (a == 100 && sum >= 75) {
			if (cnt1 > 0 && cnt2 > 0) {
				cnt3 ++;
				cnt1 --;
				cnt2 --;
				sum += 25;
			} else if (cnt1 > 2) {
				cnt1 -= 3;
				cnt3 ++;
				sum += 25;
			} else {
				flg = 1;
			}
		} else if (a == 25) {
			cnt1 ++;
			sum += 25;
		} else {
			flg = 1;
		}
	}
	cout << (flg == 1 ? "NO" : "YES") << endl;
	return 0;
}