#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve()
{
    int n;
    scanf("%d", &n);
    if (n & 1) {
        for (int i = 0; i < n; ++i) {
            printf("%d ", n);
        }
        printf("\n");
    } else {
        printf("3 ");
        for (int i = 1; i < n - 1; ++i) {
            printf("2 ");
        }
        printf("1\n");
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