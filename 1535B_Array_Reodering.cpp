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
        vector<int> a(n);
        for(int &x : a) cin >> x;
        sort(a.begin(), a.end(), [](int x, int y) {
            return x % 2 < y % 2;
        });
        int ans = 0;
        for(int i = 0; i < n; ++ i) {
            for(int j = i + 1; j < n; ++ j) {
                ans += __gcd(a[i], a[j] * 2) > 1;
            }
        }
        cout << ans << endl;
    }
	return 0;
}
