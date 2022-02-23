#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, x, y;
    cin >> t;
    while(t --) {
        cin >> x >> y;
        if(x >= y) cout << "YES" << endl;
        else {
            if(x == 1 && y < 2) cout << "YES" << endl;
            else if((x == 2 || x == 3) && y <= 3) cout << "YES" << endl;
            else if(x >= 4) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
	return 0;
}
