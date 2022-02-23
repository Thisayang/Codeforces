#include <bits\stdc++.h>
#define LL long long
using namespace std;
LL t;
string s;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> t >> s;
	int l = s.length(), ok = 0;
	for(int i = 0; i < l; i += 2) {
		if(s[i] == 'a' && s[i + 1] == 'a') {
			ok ++;
			s[i] = 'b';
		}
		if(s[i] == 'b' && s[i + 1] == 'b') {
			ok ++;
			s[i] = 'a';
		}
	}
	cout << ok << endl << s;
	return 0;
}
