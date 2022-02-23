#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
void solve() {
    string a, b;
    cin >> a >> b;
    int lena = a.size(), lenb = b.size();
    int ans = 0;
    for(int len = 1; len <= min(lena, lenb); ++ len) {
        for(int i = 0; i + len <= lena; ++ i) {
            for(int j = 0; j + len <= lenb; ++ j) {
                if(a.substr(i, len) == b.substr(j, len)) 
                    ans = max(ans, len);
            }
        }
    }
    cout << lena + lenb - 2 * ans << endl;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
    string a, b;
    cin >> t;
    while(t --) solve();
	return 0;
}
