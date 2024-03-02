#include <bits/stdc++.h>
#define MAX 3
using namespace std;

char Ans(string s[], int i)
{
    int a = 0;
    int b = 0;
    int c = 0;
    for (int j = 0; j < MAX; ++j) {
        if (s[i][j] == 'A') {
            a = 1;
        } else if (s[i][j] == 'B') {
            b = 1;
        } else if (s[i][j] == 'C') {
            c = 1;
        }
    }
    if (a == 0) {
        return 'A';
    } else if (b == 0) {
        return 'B';
    } else {
        return 'C';
    }
    return 0;
}

char Solve(string s[])
{
    for (int i = 0; i < MAX; ++i) {
        for (int j = 0; j < MAX; ++j) {
            if (s[i][j] == '?') {
                return Ans(s, i);
            }
        }
    }
    return 0;
}

int main(void)
{
    int t;
    string s[3];
    cin >> t;
    while (t--) {
        cin >> s[0] >> s[1] >> s[2];
        cout << Solve(s) << endl;
    }
    return 0;
}
