#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

void Solve(void)
{
    char str[] = "314159265358979323846264338327";
    int n = 31;
    char ch[n];
    scanf("%s", ch);
    for (int i = 0; i < sizeof(ch); ++i) {
        if (ch[i] != str[i]) {
            cout << i << endl;
            return ;
        } 
    }
    cout << n - 1 << endl;
    return;
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
    scanf("%d", &t);
    while (t--) {
        Solve();
    }
	return 0;
}