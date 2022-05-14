#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a1, a2, cnt = 0;
	cin >> a1 >> a2;
	while (a1 > 0 && a2 > 0) {
		if (a1 < 2 && a2 < 2) break;
		if (a1 > a2) {
			a1 -= 2;
			a2 ++;
		} else {
			a1 ++;
			a2 -= 2;
		}
		cnt ++;
	}
	cout << cnt << endl;
	return 0;
}