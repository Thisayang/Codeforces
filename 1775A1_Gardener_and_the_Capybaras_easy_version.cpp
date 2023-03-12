#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

inline void Solve(void)
{
    int max = 101;
    char a[max];
    scanf("%s", a);
    int len = 0;
    for (int i = 0; a[i] != 0; ++i) {
        ++len;
    }
    for (int i = 1; i < len - 1; ++i) {
        if (a[i] == 'a') {
            for (int j = 0; j < i; ++j) {
                cout << a[j];
            }
            printf(" %c ", a[i]);
            for (int j = i + 1; j < len; ++j) {
                cout << a[j];
            }
            printf("\n");
            return;
        }
    }
    printf("%c ", a[0]);
    for (int i = 1; i < len - 1; ++i) {
        cout << a[i];
    }
    printf(" %c\n", a[len - 1]);
    return;
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
    scanf("%d", &t);
    while (t --) {
        Solve();
    }
	return 0;
}