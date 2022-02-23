#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[200010];
    cin >> t;
    while(t --) {
        cin >> n;
        for(int i = 0; i < 2 * n; ++ i) cin >> a[i];
        sort(a, a + 2 * n);
        cout << a[n] - a[n - 1] << endl;
    }
	return 0;
}
