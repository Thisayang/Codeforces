#include <bits\stdc++.h>
#define LL long long
using namespace std;
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int n;
	string s;
	while(cin >> n >> s) {
		deque <char>deq;
		if(n & 1) {
			for(int i = 0; i < n; ++ i) {
				if(i & 1) deq.push_front(s[i]);
				else deq.push_back(s[i]);
			}
		}
		else {
			for(int i = 0; i < n; ++ i) {
				if(i & 1) deq.push_back(s[i]);
				else deq.push_front(s[i]);
			}
		}
		while(!deq.empty()) {
			cout << deq.front();
			deq.pop_front();
		}
		cout << endl;
	}
	return 0;
}
