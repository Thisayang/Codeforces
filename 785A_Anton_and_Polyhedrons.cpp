#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int num=0;
		string x;
		while(n--)
		{
			cin>>x;
			if(x=="Cube") num+=6;
			if(x=="Tetrahedron") num+=4;
			if(x=="Octahedron") num+=8;
			if(x=="Dodecahedron") num+=12;
			if(x=="Icosahedron") num+=20;
		}
		cout<<num<<endl;
	}
	return 0;
}