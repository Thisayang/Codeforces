#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

const int MAX = 100010;
int g_a[MAX] = {0};
int g_start = 2;
 
void Solve(void)
{
    int n;
    cin >> n;
    for (int i = g_start; i < MAX; ++i) {
        if (g_a[i] == 1) {
            continue;
        }
        if (g_a[i + n] == 1) {
            cout << i << endl;
            return ;
        }
    }
}


int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	g_a[0] = 1;
    g_a[1] = 1;
    for (int i = g_start; i < int(sqrt(MAX)); ++i) {
        if (g_a[i] == 1) {
            continue;
        }
        for (int j = 2; i * j <= MAX; ++i) {
            g_a[i * j] = 1;
        }
    }
    int t;
    cin >> t;
    while (t--) {
        Solve();
    }
	return 0;
}