#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k, a[110];
    cin >> t;
    while(t --) {
        cin >> n >> k;
        for(int i = 0; i < n; ++ i) cin >> a[i];
        for(int i = 0; k > 0 && i < n - 1; ++ i) {
            if(k > a[i]) {
                a[n - 1] += a[i];
                k -= a[i];
                a[i] = 0;
            } else {
                a[n - 1] += k;
                a[i] -= k;
                k = 0;
            }
        }
        for(int i = 0; i < n; ++ i)
            cout << a[i] << ' ';
        cout << endl;
    }
	return 0;
}
