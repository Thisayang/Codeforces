#include <bits/stdc++.h>
#define ll long long int
#define FOR(i, a, n) for (int i = a; i < int(n); ++ i)
#define ROF(i, a, n) for (int i = a; i > int(n); -- i)
const long long mod = 1e9 + 7;
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s = "+------------------------+";
	string t1 = "|#.#.#.#.#.#.#.#.#.#.#.|D|";
	string t = "|#.#.#.#.#.#.#.#.#.#.#.|.|";
	string p = "|#.......................|";
	int n, flg = 0, ans = 0;
	cin >> n;
	vector<string> v;
	v.push_back(s);
	v.push_back(t1);
	v.push_back(t);
	v.push_back(p);
	v.push_back(t);
	v.push_back(s);
	v[1] += ")";
	v[4] += ")";
	FOR(i, 1, 22) {
		FOR(j, 1, 5) {
			if (ans == n) {
				flg = 1;
				break;
			}
			if(v[j][i] == '#') {
				ans ++;
				v[j][i] = 'O';
			}
			
		}
		if (flg) break;
	}
	FOR(i, 0, 6) cout << v[i] << endl;
	return 0;
}