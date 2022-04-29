#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	if (n == 1) cout << 4 << endl;
	else if (n == 2) cout << 6 << endl;
	else {
		int ans = 6;
		for (int i = 2, j = 2, k = 0; j < n; ++ k) {
			ans += 2;
			j += i;
			if (k % 2 == 1) i ++;
		}
		cout << ans << endl;
	}
	return 0;
}