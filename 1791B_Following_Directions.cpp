#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve(void)
{
    int n;
    scanf("%d", &n);
    char ch[n + 1];
    scanf("%s", ch);
    int x = 0;
    int y = 0;
    for (int i = 0; i < n; ++i) {
        if (ch[i] == 'U')
            y++;
        else if (ch[i] == 'D')
            y--;
        else if (ch[i] == 'L')
            x--;
        else
            x++;
        if (x == 1 && y == 1) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
    scanf("%d", &t);
    while (t--) {
        Solve();
    }
	return 0;
}