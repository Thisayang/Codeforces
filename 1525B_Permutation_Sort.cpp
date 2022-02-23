#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[60];
    cin >> t;
    while(t --) {
        int cnt = 0;
        cin >> n;
        for(int i = 0; i < n; ++ i) {
            cin >> a[i];
            if(a[i] == i + 1) cnt ++;
        }
        if(cnt == n) cout << 0 << endl;
        else if(a[0] == 1 || a[n - 1] == n) cout << 1 << endl;
        else if(a[0] == n && a[n - 1] == 1) cout << 3 << endl;
        else cout << 2 << endl;
    }
	return 0;
}
