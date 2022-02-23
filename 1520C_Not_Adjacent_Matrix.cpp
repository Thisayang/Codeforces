#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
    cin >> t;
    while(t --) {
        cin >> n;
        if(n == 1) cout << 1 << endl;
        else if(n == 2) cout << -1 << endl;
        else {
            int st = (n * n + 1) / 2, end = n * n;
            for(int i = 1; i <= n * n; ++ i) {
                if(i & 1) cout << st -- << ' ';
                else cout << end -- << ' ';
                if(i % n == 0) cout << endl;
            }
        }
    }
	return 0;
}
