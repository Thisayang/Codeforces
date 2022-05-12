#include <bits/stdc++.h>
#define ll long long int
using namespace std;
struct laptop{
	int s, r, h, c, cnt;
}l[110];
bool cmp(laptop a, laptop b) {
	if (a.c != b.c) return a.c < b.c;
	if (a.s != b.s) return a.s < b.s;
	if (a.r != b.r) return a.r < b.r;
	return a.h < b.h;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; ++ i) {
		cin >> l[i].s >> l[i].r >> l[i].h >> l[i].c;
		l[i].cnt = i + 1;
	}
	sort(l, l + n, cmp);
	for (int i = 0; i < n; ++ i) {
		int flg = 0;
		for (int j = i + 1; j < n; ++ j) {
			if (l[i].s < l[j].s && l[i].r < l[j].r && l[i].h < l[j].h) {
				flg = 1;
				break;
			}
		}
		if (flg == 0) {
			cout << l[i].cnt << endl;
			break;
		}
	}
	return 0;
}