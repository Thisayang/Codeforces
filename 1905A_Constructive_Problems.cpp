#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int m)
{
    return m > n ? m : n;
}

int main(void)
{
    int t;
    int n;
    int m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        cout << Solve(n, m) << endl;
    }
    return 0;
}
