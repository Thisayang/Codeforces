#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
    string a;
    string b;
    string c;
    int ans = n;
    cin >> a >> b >> c;
    for (int i = 0; i < n; ++i) {
        if (a[i] == c[i] || b[i] == c[i]) {
            ans--;
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
        cout << (Solve(n) ? "YES" : "NO") << endl;
    }
    return 0;
}
