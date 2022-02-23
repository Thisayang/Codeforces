#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a;
    cin >> t;
    while(t --) {
        cin >> n;
        bool flg = false;
        for(int i = 0; i < n; ++ i) {
            cin >> a;
            if(a < 0) flg = true;
        }
        if(flg) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            cout << 101 << endl;
            for(int i = 0; i < 101; ++ i) cout << i << ' ';
            cout << endl;
        }
    }
	return 0;
}
