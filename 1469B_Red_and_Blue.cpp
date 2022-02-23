#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m, tmp;
    cin >> t;
    while(t --) {
        cin >> n;
        int Max1 = 0, add1 = 0;
        for(int i = 0; i < n; ++ i) {
            cin >> tmp;
            add1 += tmp;
            Max1 = max(add1, Max1);
        }
        cin >> m;
        int Max2 = 0, add2 = 0;
        for(int i = 0; i < m; ++ i) {
            cin >> tmp;
            add2 += tmp;
            Max2 = max(add2, Max2);
        }
        cout << Max1 + Max2 << endl;
    }
	return 0;
}
