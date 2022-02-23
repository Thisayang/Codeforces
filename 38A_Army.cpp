#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, b, x[110], ans = 0;
	cin >> n;
	for(int i = 1; i < n; i ++) cin >> x[i];
	cin >> a >> b;
	for(int i = a; i < b; i ++) ans += x[i];
	cout << ans;
	return 0;
}
