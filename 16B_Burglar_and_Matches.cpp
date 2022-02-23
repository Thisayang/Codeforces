#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
struct mat{
	int a, b;
};
mat x[40];
bool cmp(mat t, mat x) {
	return t.b > x.b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, m;
	while(cin >> n >> m) {
		int sum = 0;
		for(int i = 0; i < m; ++ i) {
			cin >> x[i].a >> x[i].b;
		}
		sort(x, x + m, cmp);
		for(int i = 0; n > 0 && i < m; ++ i) {
			sum += min(n, x[i].a) * x[i].b;
			n -= min(n, x[i].a); 
		}
		cout << sum << endl;
	}
	return 0;
}
