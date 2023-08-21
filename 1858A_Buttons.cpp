#include <bits/stdc++.h>

using namespace std;

int Solve(int a, int b, int c)
{
    if (a + (c + 1) / 2 > b + c / 2) {
        cout << "First" << endl;
    } else {
        cout << "Second" << endl;
    }
    return 0;
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
        Solve(a, b, c);
    }
    return 0;
}