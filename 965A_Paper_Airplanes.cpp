#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int k, n, s, p;
	cin >> k >> n >> s >> p;
	int num = n / s;
	if(n % s) num ++;
	int ans = k * num / p;
	if(k * num % p) ans ++;
	cout << ans;
	return 0;
}
