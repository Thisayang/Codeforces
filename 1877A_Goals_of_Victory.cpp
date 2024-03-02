#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
    int tmp;
    int ans = 0;
    for (int i = 1; i < n; ++i) {
        cin >> tmp;
        ans += tmp;
    }
    return ans * -1;
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
