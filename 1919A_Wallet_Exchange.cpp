#include <bits/stdc++.h>

using namespace std;

void Solve(int a, int b)
{
    if ((a + b) % 2 == 0) {
        cout << "Bob";
    } else {
        cout << "Alice";
    }
    return ;
}

int main(void)
{
    int t;
    int a;
    int b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        Solve(a, b);
        cout << endl;
    }
    return 0;
}
