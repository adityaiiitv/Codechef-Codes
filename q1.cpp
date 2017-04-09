#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,k,e,m;
		cin>>n>>k>>e>>m;
		int marks[n-1][e];
		int total[n-1];
		for(int j=0;j<n-1;j++)
		{
			total[j]=0;
			for(int k=0;k<e;k++)
			{
				cin>>marks[j][k];
				total[j]=total[j]+marks[j][k];
			}
			cout<<total[j];
		}
	}
	return 0;
}
