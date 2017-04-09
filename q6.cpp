#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int start;
        cin>>start;
        if(start==0)
        {
            int pos;
            cin>>pos;
            char replace;
            cin>>replace;
            s[pos-1]=replace;
            
        }
        if(start==1)
        {
            int l,r,p;
            cin>>l>>r>>p;
            int min=200;
            char ch;
            int pos;
            for(int j=l-1;j<r;j++)
            {
                if(s[j]-48<min)
                {
                    min=s[j]-48;
                    ch=s[j];
                    pos=j;
                }
            }
            char newa[r-l];int iter=0;
            for(int j=pos;j<r;j++)
            {
                newa[iter]=s[j];
                iter++;
            }
            for(int j=l-1;j<pos;j++)
            {
                newa[iter]=s[j];
                iter++;
            }
            //cout<<"min:"<<pos<<" char:"<<ch<<"word:"<<newa;
            cout<<newa[p-1]<<"\n";
        }
    }
	return 0;
}
