#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	LL n, max = 0;
	string s, ss, sss;
	multiset<string> ms;
	//set<string> st;
	cin >> n;
	cin >> s;
	for(int i = 1; i < n; i ++) {
		ss = ss + s[i - 1] + s[i];
		ms.insert(ss);
		//st.insert(ss);
		ss.clear();
	}
	multiset<string>::iterator it; //定义前向迭代器
	for(it = ms.begin(); it != ms.end(); it ++) {
		if(ms.count(*it) > max) {
			sss = *it;
			max = ms.count(*it);
		}
	}
	if(max != 0) cout << sss << endl;
	else cout << *ms.begin() << endl;
	return 0;
}
