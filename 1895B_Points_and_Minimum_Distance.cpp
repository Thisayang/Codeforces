#include <bits/stdc++.h>
#define MAX (210)
using namespace std;

int Solve(int n)
{
    int a[MAX];
    for (int i = 0; i < 2 * n; ++i) {
        cin >> a[i];
    }
    sort(a, a + 2 * n);
    int ans = 0;
    for (int i = 0; i < n - 1; ++i) {
        ans += abs(a[i] - a[i + 1]) + abs(a[2 * n - i - 1]  - a[2 * n - i - 2]);
    }
    cout << ans << endl;
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " " << a[2 * n - i - 1] << endl;
    }
    return 0;
}

int main(void)
{
    int t;
    int n;
    cin >> t;
    while (t--) {
        cin >> n;
        Solve(n);
    }
    return 0;
}
