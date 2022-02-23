#include <bits\stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s;
	while(cin >> n) {
		map<string, int> mp;
		map<string, int>::iterator it;
		int Max = 0;
		while(n --) {
			cin >> s;
			mp[s] ++;
			Max = max(mp[s], Max);
			
		}
		for(it = mp.begin(); it != mp.end(); ++ it) 
				if((*it).second == Max) cout << (*it).first << endl;
	}
	return 0;
}
