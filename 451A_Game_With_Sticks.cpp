#include <bits\stdc++.h>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int min = n < m ? n : m;
	if(min & 1) cout << "Akshat"; 	
	else cout << "Malvika";
	return 0;
}
