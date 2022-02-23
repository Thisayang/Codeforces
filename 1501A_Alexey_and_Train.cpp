#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[110], b[110], tm;
	while(cin >> t) {
		while(t --) {
            memset(a, 0, sizeof(a));
            memset(b, 0, sizeof(b));
			cin >> n;
            int ans = 0;
			for(int i = 1; i <= n; ++ i) cin >> a[i] >> b[i];
			for(int i = 1; i <= n; ++ i) {
                cin >> tm;
                ans += a[i] - b[i - 1] + tm;
                if(i < n) ans = max(b[i], ans + ((b[i] - a[i] + 1) / 2));
            }
            cout << ans << endl;
		}
	}
	return 0;
}
