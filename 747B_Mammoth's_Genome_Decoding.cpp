#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s;
	while(cin >> n >> s) {
		int A = 0, C = 0, G = 0, T = 0;
		if(n % 4 != 0) cout << "===" << endl;
		else {
			int tmp = n / 4;
			for(auto &i : s) {
				if(i == 'A') A ++;
				else if(i == 'C') C ++;
				else if(i == 'G') G ++;
				else if(i == 'T') T ++;
			}
			if(A > tmp || C > tmp || G > tmp || T > tmp) cout << "===" << endl;
			else {
				A = tmp - A;
				C = tmp - C;
				G = tmp - G;
				T = tmp - T;
				for(auto &i : s) {
					if(i == '?') {
						if(A) i = 'A', A --;
						else if(C) i = 'C', C --;
						else if(G) i = 'G', G --;
						else if(T) i = 'T', T --;
					}
				}
				cout << s << endl;
			}
		}
	}
	return 0;
}
