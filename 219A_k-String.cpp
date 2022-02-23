#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int k, a[26] = {0};
    string s;
    cin >> k >> s;
    for(auto &i : s) {
        a[i - 'a'] ++;
    }
    for(int i = 0; i < 26; ++ i) {
        if(a[i] % k != 0) {
            cout << -1;
            goto loop;
        }
        else a[i] /= k;
    }
    for(int i = 0; i < k; ++ i) {
        for(int j = 0; j < 26; ++ j) {
            for(int m = 0; m < a[j]; ++ m)
                cout << char('a' + j);
        }
    }
    loop: ;
	return 0;
}
