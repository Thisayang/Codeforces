#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, cnt1, cnt2;
    string s;
    cin >> n;
    while(n --) {
        cin >> s;
        cnt1 = 0, cnt2 = 0;
        for(int i = 0; s[i] != 0; ++ i) {
            if(s[i] == 'a') cnt1 ++;
            else break;
        }
        for(int i = s.length() - 1; i >= 0; -- i) {
            if(s[i] == 'a') cnt2 ++;
            else break;
        }
        if(cnt1 == s.length()) puts("NO");
        else {
            puts("YES");
            if(cnt1 >= cnt2) cout << 'a' << s << endl;
            else cout << s << 'a' << endl;
        }
    }
	return 0;
}
