#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

long long Solve(void)
{
    int n;
    string s;
    cin >> n >> s;
    long long cnta = 0;
    long long cntb = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') {
            cnta ++;
        } else {
            cntb ++;
        }
    }
    long long sub = 0;
    long long tmp = 1;
    for (int i = 1; i < n; ++i) {
        if (s[i] != s[i - 1]) {
            sub = max(tmp, sub);
            tmp = 1;
        } else {
            tmp ++;
        }
    }
    sub = max(tmp, sub);
    return max(cnta * cntb, sub * sub);
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