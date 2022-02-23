#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
struct emy{
	ll a, b;
};
emy s[100010];
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	ll t, A, B, n;
	while(cin >> t) {
		while(t --) {
			cin >> A >> B >> n;
			ll mxA = 0;
			for(int i = 0; i < n; ++ i) cin >> s[i].a, mxA = max(mxA, s[i].a);
			for(int i = 0; i < n; ++ i) {
				cin >> s[i].b;
				B -= (s[i].b + A - 1) / A * s[i].a;				
			}
			cout << (B + mxA > 0 ? "YES" : "NO") << endl;
		}
	}
	return 0;
}
