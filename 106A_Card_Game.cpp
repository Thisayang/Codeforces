#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool cmp(char a, char b) {
	if (a == 'A' && b != 'A') return true;
	else if (a == 'A' && b == 'A') return false;
	else if (a == 'K' && b != 'A' && b != 'K') return true;
	else if (a == 'K' && (b == 'A' || b == 'K')) return false;
	else if (a == 'Q' && (b != 'A' && b != 'K' && b != 'Q')) return true;
	else if (a == 'Q' && (b == 'A' || b == 'K' || b == 'Q')) return false;
	else if (a == 'J' && (b != 'A' && b != 'K' && b != 'Q' && b != 'J')) return true;
	else if (a == 'J' && (b == 'A' || b == 'K' || b == 'Q' || b == 'J')) return false;
	else if (a == 'T' && (b != 'A' && b != 'K' && b != 'Q' && b != 'J' && b != 'T')) return true;
	else if (a == 'T' && (b == 'A' || b == 'K' || b == 'Q' || b == 'J' || b == 'T')) return false;
	else if (a > b) return true;
	else return false;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string x, s, t;
	cin >> x >> s >> t;
	if (s[1] == x[0] && t[1] != x[0]) cout << "YES" << endl;
	else if (s[1] == t[1] && cmp(s[0], t[0])) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}