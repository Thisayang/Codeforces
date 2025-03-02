#include <bits/stdc++.h>
#define MAX (2023)
using namespace std;

void Solve(int n, int k)
{
    long long tmp;
    long long ans = 1;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        ans *= tmp;
    }
    if (ans > MAX || MAX % ans != 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        for (int i = 1; i < k; ++i) {
            cout << 1 << " ";
        }
        cout << MAX / ans << endl;
    }
}

int main(void)
{
    int t;
    int n;
    int k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        Solve(n, k);
    }
    return 0;
}
