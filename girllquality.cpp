#include<bits/stdc++.h>
using namespace std;
int check(long long int i,long long int j,long long int n,long long int m)
{
	if(i>=0 && j>=0 && i<=n-1 && j<=m-1)
	{
		return 1;
	}
	return 0;
}
int main()
{
	long long int n,m,c,cc=0,d=INT_MAX,f2=0,a,b;
	cin>>n>>m;
	long long int mat[n][m],i,j,f1=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>mat[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==0 && j==0)
			{
				continue;
			}
			if(mat[i][j]==1)
			{
				//cout<<"hi"<<endl;
				c=0;
				if(check(i-1,j-1,n,m)==1)
				{
					c+=mat[i-1][j-1];
				}
				if(check(i-1,j,n,m)==1)
				{
					c+=mat[i-1][j];
				}
				if(check(i-1,j+1,n,m)==1)
				{
					c+=mat[i-1][j+1];
				}
				if(check(i,j-1,n,m)==1)
				{
					c+=mat[i][j-1];
				}
				if(check(i,j+1,n,m)==1)
				{
					c+=mat[i][j+1];
				}
				if(check(i+1,j-1,n,m)==1)
				{
					c+=mat[i+1][j-1];
				}
				if(check(i+1,j,n,m)==1)
				{
					c+=mat[i+1][j];
				}
				if(check(i+1,j+1,n,m)==1)
				{
					c+=mat[i+1][j+1];
				}
				//cout<<c<<endl;
				if(c!=0)
				{
					f2=1;
					if(cc<c)
					{
						f1=0;
						d=max(i,j);
						cc=c;
						a=i+1;
						b=j+1;
					}
					else if(cc==c)
					{
						if(max(i,j)<d)
						{
							f1=0;
							d=max(i,j);
							cc=c;
							a=i+1;
							b=j+1;
						}
						else if(max(i,j)==d)
						{
							f1=1;
						}
					}
				}

			}

		}
	}
	if(f2==0)
	{
		cout<<"No suitable girl found"<<endl;
	}
	else if(f1==1)
	{
		cout<<"Polygamy not allowed"<<endl;
	}
	else
	{
		cout<<a<<":"<<b<<":"<<cc<<endl;
	}
	return 0;

}
