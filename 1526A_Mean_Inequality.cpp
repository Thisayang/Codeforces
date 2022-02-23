#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[60];
    cin >> t;
    while(t --) {
        cin >> n;
        for(int i = 0; i < 2 * n; ++ i) cin >> a[i];
        sort(a, a + 2 * n);
        for(int i = 0, j = 2 * n - 1, k = 0; k < 2 * n; ++ k) {
            if(k & 1) cout << a[i ++] << ' ';
            else cout << a[j --] << ' ';
        }
        cout << endl;
    }
	return 0;
}
