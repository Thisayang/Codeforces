#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	int ans = n / 4;
	if (n / 4 * 4 == n) ans --;
	if (n % 2 == 1) ans = 0;
	cout << ans << endl;
	return 0;
}