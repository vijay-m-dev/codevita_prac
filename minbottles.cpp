#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,bot[4]={10,7,5,1};
	cin>>t;
	while(t--)
	{
		long long int n,i,c=0;
		cin>>n;
		for(i=0;i<4;i++)
		{
			c+=n/bot[i];
			n=n%bot[i];
			if(n==0)
			{
				break;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}
