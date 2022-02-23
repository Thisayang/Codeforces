#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n, d, ok = 0;
	string s;
	cin >> n >> d >> s;
	for(int i = 0; i < n - 1;) {
		bool flg = true;
		for(int j = d; j > 0; -- j) {
			if(s[i + j] == '1' || i + j >= n - 1) {
				flg = !flg;
				i = i + j;
				break;
			} 
		}
		if(!flg) ok ++;
		else {
			ok = -1;
			break;
		}
	}
	cout << ok << endl;
	return 0;
}
