#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[110];
    cin >> t;
    while(t --) {
        cin >> n;
        for(int i = 0; i < n; ++ i) cin >> a[i];
        if(a[0] != a[1] && a[0] != a[2]) cout << 1 << endl;
        else if(a[n - 1] != a[n - 2] && a[n - 1] != a[n - 3]) cout << n << endl;
        else {
            for(int i = 1; i < n - 1; ++ i)
                if(a[i] != a[i - 1] && a[i] != a[i + 1]) cout << i + 1 << endl;
        }
    }
	return 0;
}
