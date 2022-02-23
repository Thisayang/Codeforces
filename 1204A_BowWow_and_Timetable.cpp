#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
    cin >> s;
    int ans = 0, len = s.size(), sum = 3;
    if(len > 1) ans ++;
    while(len >= sum) {
        if(len > sum) {
            ans ++;
            goto loop;
        }
        for(int i = len - 1; i > 0; -- i) {
            if(s[i] == '1') {
                ans ++;
                break;
            }
        }
        loop: ;
        sum += 2;
    }
    cout << ans << endl;
	return 0;
}
