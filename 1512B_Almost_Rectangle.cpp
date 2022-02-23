#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
    string s[410];
    cin >> t;
    while(t --) {
        cin >> n;
        int ok = 0, cnt[2][2], flg;
        for(int i = 0; i < n; ++ i) {
            cin >> s[i];
            if(ok < 2) {
                for(int j = 0; j < n; ++ j) {
                    if(s[i][j] == '*') {
                        cnt[ok][0] = i;
                        cnt[ok ++][1] = j;
                    }
                }
            }
        } 
        if(cnt[0][0] == cnt[1][0]) {
            if(cnt[0][0] != n - 1) flg = 1;
            else flg = -1;
            s[cnt[0][0] + flg][cnt[0][1]] = '*';
            s[cnt[1][0] + flg][cnt[1][1]] = '*';
        } else if(cnt[0][1] == cnt[1][1]) {
            if(cnt[0][1] != n - 1) flg = 1;
            else flg = -1;
            s[cnt[0][0]][cnt[0][1] + flg] = '*';
            s[cnt[1][0]][cnt[1][1] + flg] = '*';
        } else{
            s[cnt[0][0]][cnt[1][1]] = '*';
            s[cnt[1][0]][cnt[0][1]] = '*';
        }
        for(int i = 0; i < n; ++ i) cout << s[i] << endl;
    }
	return 0;
}
