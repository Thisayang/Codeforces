#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, n, a;
	while(cin >> t) {
		while(t --) {
			set<int> s;
			cin >> n;
			for(int i = 0; i < n; ++ i) {
				cin >> a;
				set<int>::iterator it = s.find(a);
				if(it != s.end()) {
					if(s.find(a + 1) == s.end()) s.insert(a + 1);
				} else s.insert(a);
			}
			cout << s.size() << endl;
		}
	}
	return 0;
}
