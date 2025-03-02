#include <bits/stdc++.h>

using namespace std;

void Solve(int n)
{
    vector<int> a(n);
    int flg = 0;
    int cnt = 0;
    int tmp = 1;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 0) {
            flg = 1;
        } else if (a[i] < 0) {
            cnt++;
        } else {
            tmp = i + 1;
        }
    }
    if (flg == 1 || cnt % 2 == 1) {
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
        cout << tmp << " " << 0 << endl;
    }
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
