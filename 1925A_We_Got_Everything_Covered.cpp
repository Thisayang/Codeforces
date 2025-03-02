#include <bits/stdc++.h>

using namespace std;

void Solve(int n, int k)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            cout << char('a' + j);
        }
    }
    cout << endl;
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
    }
    return 0;
}
