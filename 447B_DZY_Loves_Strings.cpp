#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll k, ans = 0, a[26], Max = 0;
    string s;
    cin >> s >> k;
    for(int i = 0; i < 26; ++ i) {
        cin >> a[i];
        Max = max(Max, a[i]);
    }
    for(int i = 0; s[i] != 0; ++ i) {
        ans += a[s[i] - 'a'] * (i + 1);
    }
    ans += ((1 + s.size() + k) * (s.size() + k) - (1 + s.size()) * s.size()) / 2 * Max;
    cout << ans << endl;
	return 0;
}
