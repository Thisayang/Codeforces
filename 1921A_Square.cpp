#include <bits/stdc++.h>
#define N (4)
using namespace std;

int Solve(void)
{
    int x[N], y[N];
    for (int i = 0; i < N; ++i) {
        cin >> x[i] >> y[i];
    }
    for (int i = 1; i < N; ++i) {
        if (x[0] == x[i]) {
            return pow(abs(y[0] - y[i]), 2);
        }
    }
    return 0;
}


int main(void)
{
    int t;
    cin >> t;
    while (t--) {
        cout << Solve() << endl;
    }
    return 0;
}
