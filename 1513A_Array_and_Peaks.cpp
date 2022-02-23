#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k;
    cin >> t;
    while(t --) {
        cin >> n >> k;
        vector<int> ans(n + 1);
        int num = n;
        for(int i = 2; i < n; i += 2) {
            if(k == 0) break;
            ans[i] = num --;
            k --;
        }
        if(k) {
            cout << -1 << endl;
            continue;
        }
        int cur = 1;
        for(int i = 1; i <= n; ++ i) {
            if(!ans[i]) ans[i] = cur ++;
        }
        for(int i = 1; i <= n; ++ i) cout << ans[i] << ' ';
        cout << endl;
    }
	return 0;
}
