#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, tmp, a[110];
    cin >> t;
    while(t --) {
        cin >> n;
        memset(a, 0, sizeof(a));
        for(int i = 0; i < n; ++ i) {
            cin >> tmp;
            a[tmp] ++;
        }
        while(n) {
            for(int i = 0; i < 101; ++ i)
                if(a[i]) {
                    cout << i << ' ';
                    a[i] --;
                    n --;
                }
        }
        cout << endl;
    }
	return 0;
}
