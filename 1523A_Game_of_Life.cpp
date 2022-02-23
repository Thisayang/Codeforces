#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m;
    string s;
    cin >> t;
    while(t --) {
        cin >> n >> m;
        cin >> s;
        for(int i = 0; i < m; ++ i) {
            bool flg = false;
            if(s[0] == '0' && s[1] == '1') s[0] = '1', flg = true;
            if(s[n - 1] == '0' && s[n - 2] == '1') s[n - 1] = '1', flg = true;
            stack<int> st;
            for(int j = 1; j < n - 1; ++ j) {
                if(s[j] == '0' && s[j - 1] == '1' && s[j + 1] == '1') continue;
                if(s[j] == '0' && (s[j - 1] == '1' || s[j + 1] == '1')) {
                    st.push(j);
                    flg = true;
                }
            }
            while(!st.empty()) {
                s[st.top()] = '1';
                st.pop();
            }
            if(!flg) break;
        }
        cout << s <<endl;
    }
	return 0;
}
