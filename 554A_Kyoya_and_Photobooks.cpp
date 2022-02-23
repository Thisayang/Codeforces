#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	string s;
	while(cin >> s) {
		cout << (s.length() + 1) * 26 - s.length() << endl; 
	}
	return 0;
}
