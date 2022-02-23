#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, n, a[100010] = {0};
    cin >> t;
    while(t --) {
        stack<int> st;
        cin >> n;
        ll ans = 0;
        for(int i = 0; i < n; ++ i) {
            cin >> a[i];
            if(a[i] > 0) st.push(i);
            else {
                while(a[i] < 0 && !st.empty()) {
                    if(abs(a[i]) >= a[st.top()]) {
                        a[i] += a[st.top()];
                        a[st.top()] = 0;
                        st.pop();
                    } else {
                        a[st.top()] += a[i];
                        a[i] = 0;
                        break;
                    }
                }
            }
        }
        while(!st.empty()) st.pop();
        for(int i = 0; i < n; ++ i) {
            if(a[i] < 0) ans += abs(a[i]);
        }
        cout << ans << endl;
    }
	return 0;
}
