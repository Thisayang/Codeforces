#include <bits/stdc++.h>

using namespace std;

void Solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int ans = 0;
    int cnt = 1;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i == 0) 
            continue;
        if ((a[i] & 1) == (a[i - 1] & 1))
            cnt++;
        else {
            ans += cnt - 1;
            cnt = 1;
        }
    }
    ans += cnt - 1;
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        Solve();
    }
}