#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	while(cin >> s)
		cout << (s.find('i', s.find('d', s.find('i', s.find('e', s.find('h'))))) == -1 ? "NO" : "YES") << endl;
	return 0;
}
