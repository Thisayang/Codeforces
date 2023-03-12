#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

int Ans(int cnt, int n, int a, int b)
{
    if (cnt == n) {
        return 0;
    } else if (a == b || max(a, b) == 1) {
        return 1;
    } else if (min(a, b) == 0) {
        return max(a, b);
    }else {
        return max(a, b) - min(a, b) + 1;
    }
}
 
void Solve()
{
    int n;
    cin >> n;
    vector<int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int cnt = 0;
    int azero = 0;
    int bzero = 0;
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        if (a[i] == b[i]) {
            cnt++;
        } else {
            if (a[i] == 0) {
                azero++;
            }
            if (a[i] == 1) {
                bzero++;
            }
        }
    }
    cout << Ans(cnt, n, azero, bzero) << endl;
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