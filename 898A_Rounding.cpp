#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n%10<=5) n=n/10*10;
		else n=(n/10+1)*10;
		cout<<n<<endl;
	}
	return 0;
}