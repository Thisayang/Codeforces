#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.first != b.first) return a.first > b.first;
	else return a.second < b.second;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k, a, b;
	cin >> n >> k;
	vector<pair<int, int>> v;
	map<pair<int, int>, int> mp;
	pair<int, int> tmp;
	FOR(i, 0, n) {
		cin >> a >> b;
		tmp = make_pair(a, b);
		v.push_back(tmp);
		mp[tmp] ++;
	}
	sort(v.begin(), v.end(), cmp);
	cout << mp[v[k - 1]] << endl;
	return 0;
}