#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int arr[n];
		int prev=-1,prevprev=-1,flag=0;
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
			if(arr[j]==prev && arr[j]==prevprev)
			{
				cout<<"Yes\n";
				flag=1;
				break;
			}
			else
			{
				prevprev=prev;
				prev=arr[j];
			}
		}
		if(flag==0)
		{
			cout<<"No\n";
		}
	}
	return 0;
}
