#include <bits/stdc++.h>
 
using namespace std;
 
long long Solve(void)
{
    long long a;
    long long b;
    long long n;
    long long m;
    cin >> a >> b >> n >> m;
    int mn = min(a, b);
    return min(mn * n, (n / (m + 1) * m * a) + (n % (m + 1)) * mn);
}
 
int main()
{
    int t;
    cin >> t;
    while (t--) {
        cout << Solve() << endl;
    }
    return 0;
}