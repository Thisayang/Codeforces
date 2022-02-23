#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t, px, py;
	string s;
	while(cin >> t) {
		while(t --) {
			cin >> px >> py >> s;
			int len = s.length();
			for(int i = 0; i < len; ++ i) {
				if(s[i] == 'U' && py > 0) py --;
				else if(s[i] == 'D' && py < 0) py ++;
				else if(s[i] == 'R' && px > 0) px --;
				else if(s[i] == 'L' && px < 0) px ++;
			}
			if(px == 0 && py == 0) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}
