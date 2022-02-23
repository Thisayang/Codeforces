#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
    string s;
    cin >> t;
    while(t --) {
        cin >> s;
        if(s.length() % 2 == 0 && s[0] != ')' && s[s.length() - 1] != '(')
            puts("YES");
        else puts("NO");
    }
	return 0;
}
