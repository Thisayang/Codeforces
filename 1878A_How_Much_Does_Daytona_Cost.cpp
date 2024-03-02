#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int k)
{
    int tmp;
    int flg = 0;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (tmp == k) {
            flg = 1;
        }
    }
    return flg;
}

int main(void)
{
        int t;
        cin >> t;
    while (t--) {
        int n;
        int k;
        cin >> n >> k;
        cout << (Solve(n, k) ? "YES" : "NO") << endl;
    }
    return 0;
}
