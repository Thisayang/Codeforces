#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int h, m;
	int a[] = {0, 1, 2, 3, 4, 5, 10, 11, 12, 13, 14, 15, 20, 21, 22, 23};
	int b[] = {0, 10, 20, 30, 40, 50, 1, 11, 21, 31, 41, 51, 2, 12, 22, 32};
	scanf("%d:%d", &h, & m);
	if (h == 23 && m > 32) cout << 60 - m;
	else {
		int ans = 0;
		for (int i = 0; i < 16; ++ i) {
			if (h == a[i] && m <= b[i]) {
				ans = b[i] - m;
				break;
			} else if (h == a[i] && m > b[i]) {
				ans = (a[i + 1] - h) * 60;
				if (b[i + 1] >= m) ans += b[i + 1] - m;
				else ans -= m - b[i + 1];
				break;
			} else if (a[i] > h) {
				ans = (a[i] - h) * 60;
				if (b[i + 1] >= m) ans += b[i] - m;
				else ans -= m - b[i];
				break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}