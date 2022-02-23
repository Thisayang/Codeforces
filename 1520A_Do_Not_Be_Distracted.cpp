#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
    string s;
    cin >> t;
    loop: ;
    while(t --) {
        cin >> n >> s;
        int a[26] = {0};
        set<char> st;
        for(int i = 0; i < n; ++ i) a[s[i] - 'A'] ++;
        for(int i = 0; i < n; ++ i) {
            if(st.find(s[i]) != st.end()) continue;
            st.insert(s[i]);
            for(int j = n - 1; j >= i; -- j) {
                if(s[j] == s[i]) {
                    if(j - i + 1 > a[s[i] - 'A']) {
                        puts("NO");
                        goto loop;
                    } else break;
                }
            }
        }
        puts("YES");
    }
	return 0;
}
