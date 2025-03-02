#include <bits/stdc++.h>
 
 using namespace std;
 
 int main(void) {
	 int t;
	 int n;
	 cin >> t;
	 while (t--) {
		 cin >> n;
		 int a[n];
		 int cnt[n + 2] = {0};
		 int ans = 0;
		 for (int i = 0; i < n; ++i) {
			 cin >> a[i];
		 }
		 cnt[a[0]] = 1;
		 for (int i = 1; i < n; ++i) {
			 if (cnt[a[i] + 1] != 1 && cnt[a[i] - 1] != 1) {
				 ans = 1;
				 break;
			 }
			 cnt[a[i]] = 1;
		 }
		 cout << (ans ? "NO" : "YES") << endl;
	 }
	 return 0;
 }