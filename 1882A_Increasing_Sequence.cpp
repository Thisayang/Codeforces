#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
    int a[n] = {0};
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        ++ans;
        if (ans == a[i]) {
            ++ans;
        }
    }
    return ans;
}

int main(void)
{
    int t;
    int n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << Solve(n) << endl;
    }
    return 0;
}
