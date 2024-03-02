#include <bits/stdc++.h>

using namespace std;

int Solve(int n)
{
    if (n % 3 != 0) {
        return 1;
    }
    return 0;
}

int main(void)
{
    int t;
    int n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << (Solve(n) ? "First" : "Second") << endl;
    }
    return 0;
}
