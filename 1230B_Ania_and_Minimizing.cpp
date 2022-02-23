#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k;
    string s;
    cin >> n >> k >> s;
    if(k == 0) cout << s << endl;
    else if(n == 1) cout << 0 << endl;
    else {
        if(s[0] != '1') -- k;
        cout << '1';
        for(int i = 1; s[i] != 0; ++ i) {
            if(k) {
                if(s[i] != '0')  -- k;
                    cout << '0';
            }
            else cout << s[i];
        }
    }
	return 0;
}
