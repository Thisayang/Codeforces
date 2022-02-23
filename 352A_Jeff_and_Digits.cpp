#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, ans = 0;
    cin >> n;
    for(int i = 0; i < n; ++ i) {
        cin >> a;
        if(a) ans ++;
    }
    if(n - ans == 0) cout << -1 << endl;
    else {
        for(int i = 0; i < ans / 9; i ++)
        {
            cout << 555555555;
        }
        if(ans / 9 > 0) {
            for(int i = 0; i < n - ans; ++ i) cout << 0;
        } else cout << 0;
        cout << endl;
    }
    return 0;
}
