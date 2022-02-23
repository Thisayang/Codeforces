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
        cout << 2 << endl;
        for(int i = n - 1, j = n; i >= 1; -- i) {
            cout << i << ' ' << j << endl;
            j = (i + j + 1) / 2;
        }
    }
	return 0;
}
