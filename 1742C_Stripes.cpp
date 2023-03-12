#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;

char Solve(void)
{
    int eight = 8;
    string s;
    bool flg = false;
    for (int i = 0; i < eight; ++i) {
        cin >> s;
        if (s == "RRRRRRRR") {
            flg = true;
        }
    }
    if (flg) {
        return 'R';
    }
    return 'B';
}

int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
    cin >> t;
    while (t--) {
        getchar();
        cout << Solve() << endl;
    }
	return 0;
}