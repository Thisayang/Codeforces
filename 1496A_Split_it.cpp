#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k;
    string s;
    cin >> t;
    while(t --) {
        cin >> n >> k >> s;
        if(n < 2 * k + 1) puts("NO");
        else {
            for(int i = 0; i < k; ++ i) {
                if(s[i] != s[n - i - 1]) {
                    puts("NO");
                    goto loop;
                }
            }
            puts("YES");
        }
        loop:;
    }
	return 0;
}
