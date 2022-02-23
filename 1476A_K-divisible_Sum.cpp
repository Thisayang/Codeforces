#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, k, ans;
    cin >> t;
    while(t --) {
        cin >> n >> k;
        if(n > k) k = (n + k - 1) / k * k;
        if(k % n == 0) ans = 0;
        else ans = 1;
        cout << (k / n) + ans << endl;
    }
	return 0;
}
