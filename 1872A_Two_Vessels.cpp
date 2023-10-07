#include <bits/stdc++.h>

using namespace std;

int Solve(int a, int b, int c)
{
        double t = (a + b) * 1.0 / 2;
        int ans = (t - min(a, b) + c - 0.0000001) / c;
        return ans;
}

int main(void)
{
        int t;
        int a;
        int b;
        int c;
        cin >> t;
        while (t--) {
                cin >> a >> b >> c;
                cout << Solve(a, b, c) << endl;
        }
        return 0;
}
