#include <bits/stdc++.h>
#define MAX (1e9 + 10)
using namespace std;

int GetSum(int x)
{
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int Solve(int x, int k)
{
    for (int i = x; i < MAX; ++i) {
        if (GetSum(i) % k == 0) {
            return i;
        }
    }
    return 0;
}

int main(void)
{
    int t;
    int x;
    int k;
    cin >> t;
    while (t--) {
        cin >> x >> k;
        cout << Solve(x, k) << endl;
    }
    return 0;
}
