#include <bits/stdc++.h>
#define MAX (30)
using namespace std;

int Solve(int n)
{
    int a[MAX];
    int b[MAX];
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i < n; ++i) {
        if ((a[i] > a[i + 1]) && (i & (i - 1))) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int t;
    int n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << (Solve(n) ? "YES" : "NO") << endl;
    }
    return 0;
}
