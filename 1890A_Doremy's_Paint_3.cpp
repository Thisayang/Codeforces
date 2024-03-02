#include <bits/stdc++.h>
#define MAX (110)
using namespace std;

int Solve(int n)
{
    int tmp;
    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        mp[tmp]++;
    }
    if (mp.size() > 2) {
        return 0;
    } else if (mp.size() == 1) {
        return 1;
    }
    if (abs(mp.begin()->second - mp.rbegin()->second) <= 1) {
        return 1;
    }
    return 0;
}

int main()
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
