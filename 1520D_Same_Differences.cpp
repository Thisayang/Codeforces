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
        int cnt = 0;
        for(int i = 0; i < n; ++ i) scanf("%d", &a[i]);
        for(int i = 0; i < n; ++ i) {
            for(int j = 1; i + j < n; ++ j) {
                if(a[j + i] - a[i] == j) cnt ++;
            }
        }
        cout << cnt << endl;
    }
	return 0;
}
