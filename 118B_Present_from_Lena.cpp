#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
    cin >> n;
    int st = 2 * n, end = 2 * n;
    for(int i = 0; i < n + 1; ++ i, st -= 2) {
        for(int j = 0, cnt = 0, ok = 1; j <= end; ++ j) {
            if(j < st) cout << ' ';
            else {
                if(j < end) cout << cnt << ' ';
                else cout << cnt;
                cnt += ok;
                if(cnt == i) ok = -1;
                
            }
        }
        cout << endl;
    }
    st = 2, end = 2 * n;
    for(int i = n - 1; i >= 0; -- i, st += 2) {
        for(int j = 0, cnt = 0, ok = 1; j <= end; ++ j) {
            if(j < st) cout << ' ';
            else {
                if(j < end) cout << cnt << ' ';
                else cout << cnt;
                cnt += ok;
                if(cnt == i) ok = -1;
            }
        }
        cout << endl;
    }
	return 0;
}
