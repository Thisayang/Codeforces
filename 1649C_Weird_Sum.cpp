#include <bits/stdc++.h>
#define ll long long int
using namespace std;
struct point {
	int x, y;
};
point a[100010][500];
int pos[100010] = {0};
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m, x;
	point
	cin >> n >> m;
	for (int i = 0; i < n; ++ i) {
		for (int j = 0; j < m; ++ j) {
			cin >> x;
			point p;
			p.x = i;
			p.y = j;
			int t = pos[x];
			a[x][t] = p;
			pos[x] ++;
		}
	}
	ll sum = 0;
	for (int i = 1; i <= 105; ++ i) {
		for (int j = 0; j < pos[i]; ++ j) {
			for (int k = j + 1; k < pos[i]; ++ k) { 
				sum += abs(a[i][j].x - a[i][k].x) + abs(a[i][j].y - a[i][k].y);
			}
		}
	}
	cout << sum << endl;
	return 0;
}