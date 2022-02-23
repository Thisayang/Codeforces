#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int gcd(int a, int b) {return b ? gcd(b, a % b) : a;}
string find(string a) {
	int len = a.size();
	for(int i = 1; i < len; ++ i) {
		int flg = 0;
		for(int j = 0; j < len - i;) {
			if(a.substr(j, i) != a.substr(j + i, i)) {
				flg = 1;
				break;
			} else j += i;
		}
		if(!flg) return a.substr(0, i);
	}
	return a;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int q;
	string s, t;
	while(cin >> q) {
		while(q --) {
			cin >> s >> t;
			string s1 = find(s), s2 = find(t);
			if(s1 == s2) {
				int k1 = s.size() / s1.size(), k2 = t.size() / s2.size();
				for(int i = 0; i < k1 * k2 / gcd(k1, k2); ++ i)
					cout << s1;
				cout << endl;
			} else cout << -1 << endl;
		}
	}
	return 0;
}
