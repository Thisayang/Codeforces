#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	long long t, a, b;
    cin >> t;
    while(t --) {
        cin >> a >> b;
        if(b == 1) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            cout << a * (b - 1) << ' ' << a * (2 * b + 1) << ' ' << a * 3 * b << endl;
        }
    }
	return 0;
}
