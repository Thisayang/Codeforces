#include <bits/stdc++.h>
#define MAX 110
using namespace std;

int Solve(int n, int k)
{
    int a[MAX];
    int flg = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i != 0 && a[i] < a[i - 1]) {
            flg = 1;
        }
    }
    if (k == 1 && flg == 1) {
        return 0;
    }
    return 1;
}

int main(void)
{
    int t;
    int n;
    int k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cout << (Solve(n, k) ? "YES" : "NO") << endl;
    }
    return 0;
}
