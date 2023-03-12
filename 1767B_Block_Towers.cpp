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
    vector<int> a(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin() + 1, a.end());
    for (int i = 1; i < n; ++i) {
        if (a[i] > a[0]) {
            int tmp = (a[i] - a[0] + 1) / 2;
            a[0] += tmp;
            a[i] -= tmp;
        }
    }
    return a[0];
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