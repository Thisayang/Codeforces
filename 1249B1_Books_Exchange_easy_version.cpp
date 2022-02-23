#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int q, n, p[210];
    cin >> q;
    while(q --) {
        cin >> n;
        for(int i = 1; i <= n; ++ i) cin >> p[i];
        for(int i = 1; i <= n; ++ i) {
            int ans = 1, s = i;
            while(p[s] != i) {
                ans ++;
                s = p[s];
            }
            cout << ans << ' ';
        }
        cout << endl;
    }
	return 0;
}
