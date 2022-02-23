#include <iostream>
using namespace std;
int main()
{
	char a[2][5];
	while(cin>>a[0]>>a[1])
	{	
		int hour1=((a[1][0]-'0')*10+(a[1][1]-'0'));
		int hour2=((a[0][0]-'0')*10+(a[0][1]-'0'));
		int min1=((a[1][3]-'0')*10+(a[1][4]-'0'));
		int min2=((a[0][3]-'0')*10+(a[0][4]-'0'));
		if(min1<min2)
		{
			min1+=60;
			hour1-=1;
		}
		int time=((min1-min2)+((hour1-hour2)*60))/2;
		int h=time/60;
		int m=time%60;
		min2=min2+m;
		if(min2>=60)
		{
			hour2+=min2/60;
			min2%=60;
		}
		hour2+=h;
		if(hour2<10) cout<<"0";
		cout<<hour2<<':';
		if(min2<10) cout<<"0";
		cout<<min2<<endl;
	}
	return 0;
}