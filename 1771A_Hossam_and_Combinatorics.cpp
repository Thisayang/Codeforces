#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

#define MIN (0)
#define MAX (100001)
void Solve()
{
    long long n;
    scanf("%lld", &n);
    int a[n];
    long long cnt_min = 1;
    long long cnt_max = 1;
    int min = MAX;
    int max = MIN;
    long long t = 2;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        if (a[i] < min) {
            min = a[i];
            cnt_min = 1;
        } else if (a[i] == min) {
            cnt_min++;
        }
        if (a[i] > max) {
            max = a[i];
            cnt_max = 1;
        } else if (a[i] == max) {
            cnt_max++;
        }
    }
    if(cnt_min != n) {
        long long ans = cnt_min * cnt_max * t;
        cout << ans << endl;
    } else {
        cout << (n - 1) * n << endl;
    }
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