#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	cin >> t;
	while (t --) {
		cin >> n;
		int ans = n / 10;
		if(n % 10 == 9) ans ++;
		cout << ans << endl;
	}
	return 0;
}
