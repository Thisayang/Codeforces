#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s, t;
    cin >> s >> t;
    if(s == t) cout << -1 << endl;
    else cout << max(s.length(), t.length()) << endl;
	return 0;
}
