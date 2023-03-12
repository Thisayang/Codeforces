#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
void Solve(void)
{
    int n;
    string s;
    cin >> n >> s;
    queue<char> q;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'Q') {
            q.push(s[i]);
        } else if (s[i] == 'A' && !q.empty()) {
            q.pop();
        }
    }
    if (q.empty()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
    cin >> t;
    while(t --) {
        Solve();
    }
	return 0;
}