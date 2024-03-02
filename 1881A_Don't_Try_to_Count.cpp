#include <bits/stdc++.h>

using namespace std;

int Solve(int n, int m)
{
    string x;
    string s;
    cin >> x >> s;
    for (int i = 0; i < 8; ++i) {
        if (x.find(s) != x.npos) {
            return i;
        }
        x += x;
    }
    return -1;
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
