#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

int Solve(void)
{
    int n;
    cin >> n;
    int cnt = 0;
    int ans = 64;
    int devide = 2;
    vector<int> a(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        int tmp = 0;
        if (a[i] & 1) {
            cnt ++;
            while (a[i] & 1) {
                tmp++;
                a[i] /= devide;
            }
        } else {
            while(!(a[i] & 1) && a[i] > 0) {
                tmp++;
                a[i] /= devide;
            }
        }
        ans = min(ans, tmp);
    }
    if (cnt & 1) {
        return ans;
    }
    return 0;
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
    cin >> t;
    while (t--) {
        cout << Solve() << endl;
    }
	return 0;
}