#include <bits/stdc++.h>
#define MAX (110)
using namespace std;

int Solve(int n, int x)
{
    int ans = 0;
    int a[MAX];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i == 0) {
            ans = a[i];
        } else {
            ans = (ans > a[i] - a[i - 1]) ? ans : a[i] - a[i - 1];
        }
    }
    ans = (ans > (x - a[n - 1]) * 2) ? ans : (x - a[n - 1]) * 2;
    return ans;
}

int main(void)
{
    int t;
    int n;
    int x;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        cout << Solve(n, x) << endl;
    }
    return 0;
}
