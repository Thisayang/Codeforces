#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, a[60], b, Max = 0;
	map<int, int> mp;
	cin >> n;
	for(int i = 0; i < n; ++ i) cin >> a[i];
	cin >> m;
	for(int i = 0; i < m; ++ i) {
		cin >> b;
		for(int j = 0; j < n; ++ j) {
			if(b % a[j] != 0) continue;
			if(mp.find(b / a[j]) == mp.end()) mp[b / a[j]] = 1;
			else mp[b / a[j]] ++;
		}
	}
	cout << (*mp.rbegin()).second << endl;
	return 0;
}
