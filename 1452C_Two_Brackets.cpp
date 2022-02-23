#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	string s;
	cin >> t;
	while(t --) {
		cin >> s;
		int l = s.length(), a = 0, b = 0, ok = 0;
		for(int i = 0; i != l; i ++) {
			if(s[i] == '(') a ++;
			else if(s[i] == '[') b ++;
			else if(s[i] == ')' && a != 0) {
				a --;
				ok ++;
			}
			else if(s[i] == ']' && b != 0) {
				b --;
				ok ++;
			}
		}
		cout << ok << endl;
	}
	return 0;
}
