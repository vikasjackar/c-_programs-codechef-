#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,k;
	    cin>>n>>m>>k;
	    int count=0;
	    int result=0;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]==1)
	        count++;
	    }
	    if(count==n)
	    result=100;
	    else
	    {
	        int temp=0;
	        for(int i=0;i<m;i++)
	        {
	            if(a[i]!=1)
	            temp=1;
	        }
	        
	        if(temp==1)
	        result=0;
	        else
	        result=k;
	        
	    }
	    
	    cout<<result<<endl;
	}
	return 0;
}
