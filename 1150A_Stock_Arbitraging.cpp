#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, r, s[40], b[40], ans = 0;
	cin >> n >> m >> r;
	for(int i = 0; i < n; ++ i) cin >> s[i];
	for(int i = 0; i < m; ++ i) cin >> b[i];
	sort(s, s + n);
	sort(b, b + m);
	if(s[0] > b[m - 1]) ans = r;
	else ans = r  + r / s[0] *(b[m - 1] - s[0]); 
	cout << ans;
	return 0;
}
