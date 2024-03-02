#include <bits/stdc++.h>

using namespace std;

void Solve(int n)
{
    long long tmp;
    long long  sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        sum += tmp;
    }
    if ((long long)sqrt(sum) * (long long)sqrt(sum) == sum) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return ;
}

int main(void)
{
    int t;
    int n;
    cin >> t;
    while (t--) {
        cin >> n;
        Solve(n);
    }
    return 0;
}
