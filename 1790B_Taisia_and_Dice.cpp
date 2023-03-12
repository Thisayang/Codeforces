#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve(void)
{
    int n;
    int s;
    int r;
    scanf("%d%d%d", &n, &s, &r);
    printf("%d ", s - r);
    int x = r % (n - 1);
    if (x == 0) x == n - 1;
    for (int i = x; i > 0; --i) {
        printf("%d ", r / (n - 1) + 1);
    }
    for (int i = n - x - 1; i > 0; --i) {
         printf("%d ", r / (n - 1));
    }
    printf("\n");
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