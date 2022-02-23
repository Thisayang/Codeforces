#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a[200010];
    cin >> t;
	while(t --) {
		cin >> n;
		for(int i = 1; i <= n; ++ i) cin >> a[i];
        for(int i = n; i > 0; -- i) {
            if(a[i] > 1) {
                if(a[i - 1] < a[i] - 1) a[i - 1] = a[i] - 1;
                a[i] = 1;
            }
		}
		for(int i = 1; i <= n; ++ i) cout << a[i] << ' ';
		cout << endl;
	}
	return 0;
}
