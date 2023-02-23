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
	    int i=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int count=0,flag=0,j=0;
	    for(i=0;i<n;i++)
	    {
	        count=1;
	        for(j=i+1;j<n;j++)
	        {
	            if(a[i]==a[j] && a[i]!=1 && a[j]!=1)
	            {
	                a[j]=1;
	                count++;
	            }
	        }
	        if(count%a[i]!=0)
	            {
	            flag=1;
	            break;
	            }
	    }
	    if(flag==0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
