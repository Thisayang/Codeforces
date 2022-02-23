#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int a, b;
    cin >> a >> b;
    if(b % a != 0) cout << -1 << endl;
    else if(a == b) cout << 0 << endl;
    else {
        int k = b / a, ans = 0;
        while(k % 2 == 0) k /= 2, ans ++;
        while(k % 3 == 0) k /= 3, ans ++;
        if(k != 1) cout << -1 << endl;
        else cout << ans << endl;
    }
	return 0;
}
