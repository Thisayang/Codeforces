#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, tmp;
    cin >> t;
    while(t --) {
        cin >> n;
        int cnt[4] = {0};
        for(int i = 0; i < n; ++ i) {
            cin >> tmp;
            cnt[tmp] ++;
        }
        cout << cnt[1] + cnt[3] << endl;
    }
	return 0;
}
