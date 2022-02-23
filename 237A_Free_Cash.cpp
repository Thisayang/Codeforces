#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, h, min,ans = 0;
    map<pair<int, int>, int> mp;
    pair<int, int> p;
    cin >> n;
    while(n --) {
        cin >> h >> min;
        p.first = h;
        p.second = min;
        mp[p] ++;
    }
    map<pair<int, int>, int>::iterator it;
    for(it = mp.begin(); it != mp.end(); ++ it) {
        ans = max(ans, (*it).second);
    }
    cout << ans << endl;
	return 0;
}
