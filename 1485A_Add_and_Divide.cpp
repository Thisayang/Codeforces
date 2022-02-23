#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, a, b;
	while(cin >> t) {
		while(t --) {
			cin >> a >> b;
            if(a < b) cout << 1 << endl;
            else if(a == b) cout << 2 << endl;
            else {
                int ans = 32, tmp = 0, t = b;
                if(t == 1) t ++;
                while(tmp <= ans) {
                    tmp = t - b;
                    if(tmp >= ans) break;
                    int s = a;
                    while(s != 0) {
                        s /= t;
                        tmp ++;
                    }
                    t ++;
                    if(tmp < ans) ans = tmp; 
                }
                cout << ans << endl;
            }
        }
	}
	return 0;
}
