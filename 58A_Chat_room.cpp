#include <bits\stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	stack<char> st;
	st.push('o');
	st.push('l');
	st.push('l');
	st.push('e');
	st.push('h');
	for(int i = 0; s[i] != 0; i ++){
		if(s[i] == st.top()) st.pop();
		if(st.empty()){
			cout << "YES";
			break;
		} 
	}	
	if(!st.empty()) cout << "NO";
	return 0;
}
