#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a;
    map<int, int> mp;
    cin >> n;
    for(int i = 0; i < n; ++ i) {
        cin >> a;
        mp[a] ++;
    }
    map<int, int>::iterator it;
    int cnt = 1;
    for(it = mp.begin(); it != mp.end();) {
        if((*it).first == cnt) cnt ++, it ++;
        else if((*it).first > cnt && (*it).second > 0) {
            (*it).second --;
            cnt ++;
            if((*it).second == 0) ++ it;
        }
        else break;
    }
    cout << cnt - 1 << endl;
	return 0;
}
