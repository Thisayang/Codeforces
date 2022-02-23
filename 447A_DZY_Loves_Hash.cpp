#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int p, n, a, b[310] = {0}, ok = 0, ans = -1;
	cin >> p >> n;
	for(int i = 1; i <= n; ++ i) {
		cin >> a;
		b[a % p] ++;
		if(!ok && b[a % p] == 2) ok = 1, ans = i;
	}
	cout << ans;
	return 0;
}
