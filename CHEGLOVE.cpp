#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int l[n];
	    int g[n];
	    int i=0,j=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>l[i];
	    }
	    for(j=0;j<n;j++)
	    {
	        cin>>g[j];
	    }
	    int flag1=0,flag2=0;
	    for(i=0;i<n;i++)
	    {
	        if(g[i]<l[i])
	        {
	            flag1=1;
	            break;
	        }
	    }
	    for(i=0,j=(n-1);i<n,j>=0;i++,j--)
	    {
	        if(g[j]<l[i])
	        {
	            flag2=1;
	            break;
	        }
	    }
	    if(flag1==0 && flag2==0)
	    cout<<"both"<<endl;
	    else if(flag1==0)
	    cout<<"front"<<endl;
	    else if(flag2==0)
	    cout<<"back"<<endl;
	    else
	    cout<<"none"<<endl;
	}
	return 0;
}
