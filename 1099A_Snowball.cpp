#include <bits\stdc++.h>
#define LL long long
struct stone{
	int u, d;
}st[2];
bool cmp(stone s, stone t){
	return s.d > t.d;
}
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int w, h, j;
	cin >> w >> h;
	cin >> st[0].u >> st[0].d >> st[1].u >> st[1].d;
	sort(st, st + 2, cmp);
	for(h, j = 0; h != 0; h --) {
		w += h;
		if(h == st[j].d) w -= st[j ++].u;
		if(w < 0) w = 0;
	}
	cout << w;
	return 0;
}
