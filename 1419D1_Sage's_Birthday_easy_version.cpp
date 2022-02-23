#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a[100010], ans;
    cin >> n;
    for(int i = 0; i < n; ++ i) cin >> a[i];
    sort(a, a + n);
    if(n & 1) ans = n / 2;
    else ans = (n - 1) / 2;
    int st0 = 0, st1 = ans;
    cout << ans << endl;
    for(int i = 0; i < n - 1; ++ i) {
        if(i % 2 == 0) cout << a[st1 ++] << ' ';
        else cout << a[st0 ++] << ' ';
    }
    cout << a[n - 1] << endl;
	return 0;
}
