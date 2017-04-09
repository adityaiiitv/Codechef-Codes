#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	long double sum=0;
	for(int i=0;i<t;i++)
	{
		long int n;
		scanf("%ld",&n);
		long double arr[n];
		short int found=0;
		short int count=0;
		long int iter=0;
		long int neg[n];
		scanf("%Le",&arr[0]);
		long double max=arr[0];
		if(max<0)
		{
			count++;
			neg[iter]=0;
			iter++;
		}
		for(int j=1;j<n;j++)
		{
			scanf("%Le",&arr[j]);
			if(arr[j]<0)
			{
				count++;
				if(arr[j]>max)
				{
					max=arr[j];
				}
				neg[iter]=j;
				iter++;
			}
		}
		if(iter>0)
		{
			found=1;
		}
		if(count == n)
		{
			found=-1;
			sum=max;
		}
		if(found==1)
		{
			for(int j=0;j<iter;j++)
			{
				long double temp=arr[neg[j]];
				arr[neg[j]]=0;
				for(int l=0;l<n;l++)
				{
					for(int k=1;k<=n-l;k++)
					{
						long double total=0;
						for(int m=l;m<k;m++)
						{
							total=total+arr[m];
						}
						if(total>sum)
						{
							sum=total;
						}
					}
				}
				arr[neg[j]]=temp;
			}
		}
		if(found == 0)
		{
			for(int j=0;j<n;j++)
			{
				sum=sum+arr[j];
			}
		}
	cout<<sum;
	}
	return 0;
}
