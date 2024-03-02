#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
    for (int i = 0; i < n; ++i) {
        cout << i * 2 + 1 << " ";
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
        cout << endl;
    }
    return 0;
}
