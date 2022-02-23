#include <iostream>
using namespace std;
int main()
{
	char a[27],b[27];
	while(cin>>a>>b)
	{
		char c[1001];
		cin>>c;
		for(int i=0;c[i]!=0;i++)
		{
			int ok=0;
			if(c[i]>='0'&&c[i]<='9') cout<<c[i];
			else 
			{
				if(c[i]>='A'&&c[i]<='Z')
				{
					c[i]+=32;
					ok=1;
				}					
				for(int j=0;j<26;j++)
				{
					if(a[j]==c[i])
					{
						c[i]=b[j];
						if(ok==1) c[i]-=32;
						cout<<c[i];
						break;
					}						
				}
			}
		}
		cout<<endl;
	}
	return 0;
}