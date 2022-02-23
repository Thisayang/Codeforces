#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k1, k2, w, b;
    cin >> t;
    while(t --) {
        cin >> n >> k1 >> k2 >> w >> b;
        int Min = min(k1, k2), Max = max(k1, k2), Min2 = min(n - k1, n - k2), Max2 = max(n - k1, n - k2);
        if((Min + (Max - Min) / 2 >= w) && (Min2 + (Max2 - Min2) / 2 >= b)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}
