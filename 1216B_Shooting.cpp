#include <bits\stdc++.h>
#define LL long long
using namespace std;
struct can{
	int num, pos;
};
bool cmp(can a, can b) {
	return a.num > b.num;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	can a[1010];
	while(cin >> n) {
		int sum = 0;
		for(int i = 0; i < n; ++ i) cin >> a[i].num, a[i].pos = i + 1;
		sort(a, a + n, cmp);
		for(int i = 0; i < n; ++ i) sum += i * a[i].num + 1;
		cout << sum << endl;
		for(int i = 0; i < n; ++ i) cout << a[i].pos << ' ';
		cout << endl;
	}
	return 0;
}
