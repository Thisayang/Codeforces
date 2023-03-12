#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve()
{
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i == 0) {
            a[i] -= 1;
        } else {
            if (a[i] - (i + 1) > a[i - 1]) {
                a[i] -= i + 1;
            } else {
                a[i] = a[i - 1] + 1;
            }
        }
        cout << a[i] << endl;
    }
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	Solve();
	return 0;
}