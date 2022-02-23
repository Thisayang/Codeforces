#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, s[200010];
	cin >> t;
	while(t --) {
		cin >> n;
		multiset<int> t;
		for(int i = 0; i < n; ++ i) cin >> s[i], t.insert(s[i]);
		sort(s, s + n);
		if(t.find(s[i]) == n) {
			cout << n << endl;
			for(int i = 1; i <= n; ++ i) cout << i << ' ';
			cout << endl;
		}
		else cout << n
	}
	return 0;
}
