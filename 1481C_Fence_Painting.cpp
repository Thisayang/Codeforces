#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, m, a[100010], b[100010], c[100010];
	while(cin >> t) {
		while(t --) {
			multimap<int, int> mp;
			multimap<int, int>::iterator it;
			queue<int> que;
			cin >> n >> m;
			for(int i = 1; i <= n; ++ i) cin >> a[i];
			for(int i = 1; i <= n; ++ i) {
				cin >> b[i];
				mp.insert(pair<int, int>(b[i], i));
			}
			for(int i = 0; i < m; ++ i) {
				cin >> c[i];
				it = mp.find(c[i]);
				if(it != mp.end()) {
					que.push((*it).second);
				} else {
					it = mp.begin();
					que.push((*it).second);
				}
			}
			if(mp.begin() == mp.end()) {
				cout << "YES" << endl;
				while(!que.empty()) {
					cout << que.front() << ' ';
					que.pop();
				}
				cout << endl;
			}
			else cout << "NO" << endl;
		}
	}
	return 0;
}
