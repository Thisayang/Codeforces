#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, ans = 1, t = 1;
	cin >> n;
	int tmp = n - 1;
	while(tmp --) {
		ans = ans + t;
		t ++;
		if(ans > n) ans %= n;
		cout << ans << ' ';
	}
	return 0;
}
