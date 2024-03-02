#include <bits/stdc++.h>

using namespace std;

int Solve(char *pos)
{
    for (int i = 1; i <= 8; ++i) {
        if ('a' + i - 1 != pos[0]) {
            cout << (char)('a' + i - 1) << pos[1] << " ";
        }
    }
    for (int i = 0; i < 8; ++i) {
        if (i + '1' != pos[1]) {
            cout << pos[0] << i + 1 << " ";
        }
    }
    return 0;
}

int main(void)
{
    int t;
    char pos[3];
    cin >> t;
    while (t--) {
        cin >> pos;
        Solve(pos);
        cout << endl;
    }
    return 0;
}
