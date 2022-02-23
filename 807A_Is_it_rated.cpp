#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, a, b;
	while(cin >> n) {
		int tmp = 4127;
		bool flg = 0, ok = 0;
		while(n --) {
			cin >> a >> b;
			if(a != b) flg = 1;
			if(tmp < b) ok = 1;
			tmp = b;
		}
		if(flg) cout << "rated" << endl;
		else if(!flg && ok) cout << "unrated" << endl;
		else cout << "maybe" << endl;
	}
	return 0;
}
