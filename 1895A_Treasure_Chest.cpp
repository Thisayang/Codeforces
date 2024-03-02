#include <bits/stdc++.h>

using namespace std;

int Solve(int x, int y, int k)
{
    if (x > y) {
        return x;
    } else if (x < y && x + k >= y) {
        return y;
    }
    return 2 * y - x - k;
}

int main(void)
{
    int t;
    int x;
    int y;
    int k;
    cin >> t;
    while (t--) {
        cin >> x >> y >> k;
        cout << Solve(x, y, k) << endl;
    }
    return 0;
}
