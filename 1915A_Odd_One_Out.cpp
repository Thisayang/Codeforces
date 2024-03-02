#include <bits/stdc++.h>

using namespace std;

int Solve(int a, int b, int c)
{
    return a ^ b ^ c;
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
