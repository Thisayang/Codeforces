#include <bits/stdc++.h>
using namespace std;

void Solve(void)
{
    int n;
    cin >> n;
    string s;
    string x = "FBFFBFFBFBFFBFFBFB";
    cin >> s;
    if (x.find(s) != -1) 
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        Solve();
    }
}