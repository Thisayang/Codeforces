#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
struct nob{
	ll a, b;
};
bool cmp(nob a, nob b) {
	return a.b < b.b;
}
nob no[100010];
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, k,size[100010];
	while(cin >> n >> k) {
		set<ll> s;
		memset(size, 0, sizeof(size));
		ll ans = 0;
		for(int i = 0; i < n; ++ i) cin >> no[i].a, s.insert(no[i].a), size[no[i].a] ++;
		for(int i = 0; i < n; ++ i) cin >> no[i].b;
		int num = s.size();
		if(num < k) {
			sort(no, no + n, cmp);
			for(int i = 0; num < k; ++ i) {
				if(size[no[i].a] > 1) {
					ans += no[i].b;
					size[no[i].a] --;
					num ++;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
