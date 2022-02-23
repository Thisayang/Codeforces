#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int a=0,b=0,c=0,s;
		for(int i=0;i<n;i++)
		{
			cin>>s;
			if(i%3==0) a+=s;
			else if(i%3==1) b+=s;
			else c+=s;
		}
		int max=a;
		if(max<b) max=b;
		if(max<c) max=c;
		if(max==a) cout<<"chest"<<endl;
		else if(max==b) cout<<"biceps"<<endl;
		else cout<<"back"<<endl;
	}
	return 0;
}