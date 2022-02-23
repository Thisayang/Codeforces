#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, col[4];
    cin >> t;
    while(t --) {
        int odd = 0;
        for(int i = 0; i < 4; ++ i) {
            cin >> col[i];
            if(col[i] & 1) odd ++;
        }
        if(odd < 2) {
            puts("YES");
            continue;
        }
        int Min = min(min(col[0], col[1]), col[2]);
        if(Min == 0 || odd == 2) puts("NO");
        else puts("YES");
    }
	return 0;
}
