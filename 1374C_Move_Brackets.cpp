#include <bits\stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t --) {
		int n, ok = 0;
		cin >> n;
		stack<char> st;
		string s;
		cin >> s;
		for(int i = 0; s[i] != 0; i ++){
			if(s[i] == '(') st.push(s[i]);
			else {
				if(!st.empty()) st.pop();
				else ok ++;
			}
		}
		cout << ok << endl;
	}
	return 0;
}
