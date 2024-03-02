#include <bits/stdc++.h>
#define MAX 30
using namespace std;

char Solve(int n)
{
    char s[MAX];
    cin >> s;
    return s[n - 1];
}

int main(void)
{
    int t;
    int n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << Solve(n) << endl;
    }
    return 0;
}
