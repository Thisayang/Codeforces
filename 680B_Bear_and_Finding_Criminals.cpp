#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, t[110];
    cin >> n >> a;
    int st = a - 1, end = a + 1, ans = 0;
    for(int i = 1; i <= n; ++ i) cin >> t[i];
    if(t[a] == 1) ans ++;
    for(st, end; st > 0 && end <= n; -- st, ++ end) {
        if(t[st] == 1 && t[end] == 1) ans += 2; 
    }
    for(st; st > 0; -- st)
        if(t[st] == 1) ans ++;
    for(end; end <= n; ++ end)
        if(t[end] == 1) ans ++;
    cout << ans << endl;
	return 0;
}
