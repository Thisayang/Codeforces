#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		int cnt = 0;
		for (int i = 1, j = 0, k = 1; ;) {
			if ((i + j) * k > n) break;
			else cnt ++;
			k ++;
			if (k == 10) {
				i *= 10;
				j = j * 10 + 1;
				k = 1;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}