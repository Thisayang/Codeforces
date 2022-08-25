#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
struct S{
	string t;
	int g;
};
bool cmp(S x, S y) {
	return x.t < y.t;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	string s;
	vector<S> v;
	cin >> n >> m;
	FOR(i, 0, n) {
		cin >> s;
		S tmp;
		tmp.g = i + 1;
		FOR(i, 1, m) {
			if (i & 1) s[i] = s[i] + (25 - (s[i] - 'A') * 2);
		}
		tmp.t = s;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(), cmp);
	FOR(i, 0, n) cout << v[i].g << " " ;
	cout << endl;
	return 0;
}