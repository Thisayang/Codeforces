#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int k)
{
    for (int i = n; i > k + 1; --i) {
        cout << i << " ";
    }
    for (int i = 1; i <= k + 1; ++i) {
        cout << i << " ";
    }
    return 0;
}

int main(void)
{
    int t;
    int n;
    int k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        Solve(n, k);
        cout << endl;
    }
    return 0;
}
