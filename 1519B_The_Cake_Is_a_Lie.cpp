#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m, k;
    cin >> t;
    while(t --) {
        cin >> n >> m >> k;
        int x = 1, y = 1, ans = 0;
        while(x < n) {
            ans += y;
            x ++;
        }
        while(y < m) {
            ans += x;
            y ++;
        }
        if(ans == k) puts("YES");
        else puts("NO");
    }
	return 0;
}
