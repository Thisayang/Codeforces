#include <bits/stdc++.h>
#define MAX 26
using namespace std;

int Solve(int n)
{
    char a[n];
    int cnt[MAX] = {0};
    int ans = 0;
    cin >> a;
    for (int i = 0; i < n; ++i) {
        cnt[a[i] - 'A']++;
    }
    for (int i = 0; i < MAX; ++i) {
        if (cnt[i] >= i + 1) {
            ++ans;
        }
    }
    return ans;
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
