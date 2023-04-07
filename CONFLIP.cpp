#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,res=0;
	cin>>t;
	while(t--)
	{
	    int g;
	    cin>>g;
	    while(g--)
	    {
	        int i,n,q;
	        cin>>i>>n>>q;
	        if(i==1)
	        {
	            if(n%2!=0)
	            {
	                if(q==1)
	                res=n/2;
	                else
	                res=n/2 + 1;
	            }
	            else
	            {
	                res=n/2;
	            }
	        }
	        else
	        {
	            if(n%2!=0)
	            {
	                if(q==1)
	                res=n/2 + 1;
	                else
	                res=n/2;
	            }
	            else
	            res=n/2;
	        }
	        cout<<res<<endl;
	    }
	}
	return 0;
}
