#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n;
    string s;
    cin >> t;
    while(t --) {
        cin >> n >> s;
        stack<int> stk;
        ll cnt = 0, sum = 0;
        for(int i = 0; i < n; ++ i) {
            if(s[i] == '*') {
                cnt ++;
                sum += i;
                stk.push(i);
            }
        }
        if(cnt == 0 || cnt == n || cnt == 1) cout << 0 << endl;
        else {
            ll x = cnt - 1, end, tmp = (cnt - 1) * cnt / 2, min = 10000000000000;
            for(int i = 0; i <= n - cnt; ++ i) {
                if(abs(tmp - sum) < min) {
                    min = abs(tmp - sum);
                    end = x + i;
                }
                if(tmp == sum) break;
                tmp += cnt;
            }
            int ans = 0;
            while(!stk.empty()) {
                ans += abs(stk.top() - end);
                end --;
                stk.pop();
            }
            cout << ans << endl;
        }
    }
	return 0;
}
