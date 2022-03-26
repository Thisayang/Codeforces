#include <bits/stdc++.h>
#define ll long long int
using namespace std;
struct node{
	int p, q, r;
}songs[200010];
bool cmp(node x, node y) {
	if (x.r == y.r) return x.p < y.p;
	else return x.r < y.r;
}
bool cmp1(node x, node y) {
	return x.q < y.q;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n;
	string s;
	cin >> t;
	while (t --) {
		cin >> n;
		for (int i = 0; i < n; ++ i) {
			cin >> songs[i].p;
			songs[i].q = i;
		}
		cin >> s;
		for (int i = 0; i < n; ++ i) {
			if (s[i] == '0') songs[i].r = 0;
			else songs[i].r = 1;
		}
		sort(songs, songs + n, cmp);
		for (int i = 0; i < n; ++ i) songs[i].p = i + 1;
		sort(songs, songs + n, cmp1);
		for (int i = 0; i < n; ++ i) cout << songs[i].p << " ";
		cout << endl;
	}
	return 0;
}