#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[110];
    cin >> t;
    while(t --) {
        cin >> n;
        for(int i = 0; i < n; ++ i) cin >> a[i];
        sort(a, a + n);
        for(int i = n - 1; i >= 0; -- i) cout << a[i] << ' ';
        cout << endl;
    }
	return 0;
}
