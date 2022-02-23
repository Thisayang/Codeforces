#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, t[60];
	while(cin >> n) {
		set<int> s;
		for(int i = 0; i < n; ++ i) cin >> t[i], s.insert(t[i]);
		sort(t, t + n);
		bool flg = 0;
		for(int i = 0; i < n - 2; ++ i) {
			if(s.find(t[i] + 1) != s.end() && s.find(t[i] + 2) != s.end()) {
				flg = 1;
				break;
			}
		}
		cout << (flg == 1 ? "YES" : "NO") << endl;
	}
	return 0;
}
