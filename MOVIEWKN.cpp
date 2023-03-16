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
	    int r[n];
	    int temp[n];
	    int i=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>l[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>r[i];
	        temp[i]=l[i]*r[i];
	    }
	    int max=0,rate=0,index=0;
	    for(i=0;i<n;i++)
	    {
	        if(temp[i]>max)
	        {
	            max=temp[i];
	            rate=r[i];
	            index=i;
	        }
	        else if(temp[i]==max)
	        {
	            if(r[i]>rate)
	            {
	                rate=r[i];
	                index=i;
	            }
	            else if(r[i]==rate)
	            {
	                if(i<index)
	                {
	                    index=i;
	                }
	                
	            }
	        }
	    }
	    cout<<(index + 1)<<endl;
	}

	return 0;
}
