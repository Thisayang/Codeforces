#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s, t, st, nt, t1, t2;
	int n;
	while(cin >> s >> t >> n) {
		t1 = s, t2 = t;
		cout << t1 << ' ' << t2 << endl;
		for(int i = 0; i < n; ++ i) {
			cin >> st >> nt;
			if(st == t1) t1 = nt;
			else t2 = nt;
			cout << t1 << ' ' << t2 << endl;
		}
	}
	return 0;
}
