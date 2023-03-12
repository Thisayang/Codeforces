#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

int Ans(int index, int even, int odd)
{
    if (index == 0) {
        return even;
    }
    return odd;
}
 
void Solve(void)
{
    int n;
    int q;
    long long ans = 0;
    int en = 0;
    int odd = 0;
    cin >> n >> q;
    long long tmp;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (tmp & 1) {
            odd++;
        } else {
            en++;
        }
        ans += tmp;
    }
    int index;
    for (int i = 0; i < q; ++i) {
        cin >> index >> tmp;
        ans += Ans(index, en, odd) * tmp;
        if (tmp & 1 && index == 1) {
            en += odd;
            odd = 0;
        } else if (tmp & 1 && index == 0) {
            odd += en;
            en = 0;
        }
        cout << ans << endl;
    }
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
    cin >> t;
    while (t--) {
        Solve();
    }
	return 0;
}