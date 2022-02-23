#include <iostream>
using namespace std;
int main()
{
	int m,n;
	while(cin>>m>>n)
	{
		char a[100000];
		int s[26]={0};
		cin>>a;
		for(int i=0;i<m;i++) s[a[i]-'A']++;
		int min=s[0];
		for(int i=1;i<n;i++) if(min>s[i]) min=s[i];
		cout<<min*n<<endl;
	}
	return 0;
}