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
	    int a[n];
	    int i=0,temp=0,max=0,flag=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    bool check[n];
	    for(i=0;i<n;i++)
	    {
	        check[i]=0;
	    }
	    for(i=0;i<n;i++)
	    {
	        if(check[i]==1)
	        {
	            continue;
	        }
	        int count=1;
	        for(int j=i + 1;j<n;j++)
	        {
	            if(a[i]==a[j])
	            {
	                check[j]=1;
	                count++;
	            }
	        }
	        if(max<count)
	        {
	            flag=0;
	            max=count;
	            temp=a[i];
	        }
	        else if(max==count)
	        {
	            flag=1;
	        }
	    }
	    if(flag==0)
	    cout<<temp<<endl;
	    else
	    cout<<"CONFUSED"<<endl;
	}
	return 0;
}
