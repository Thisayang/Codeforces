#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

int Solve(void)
{
    string s;
    cin >> s;
    int ans = s[0] - '0' + s[s.length() - 1] - '0';
    return ans;
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
    cin >> n;
    while (n--) {
        cout << Solve() << endl;
    }
	return 0;
}