#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve(void)
{
    char s;
    getchar();
    scanf("%c", &s);
    if (s == 'c' || s == 'd' || s == 'e' || s == 'f' || s == 'o' || s == 'r' || s == 's') {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
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