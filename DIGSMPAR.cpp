#include <iostream>
using namespace std;
int digitsum(int n)
{
    int sum=0;
    while(n!=0)
    {
        int temp=n%10;
        sum=sum+temp;
        n=n/10;
    }
    return sum;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int i=1;
	    int sum=digitsum(n);
	    if(sum%2==0)
	    {
	        if(digitsum(n+i)%2!=0)
	        {
	            cout<<(n+i)<<endl;
	        }
	        else
	        {
	            while(digitsum(n+i)%2==0)
	            {
	                i++;
	                if(digitsum(n+i)%2!=0)
	                    {
            	            cout<<(n+i)<<endl;
	                     }
	            }
	        }
	    }
	    else
	    {
	        if(digitsum(n+i)%2==0)
	        {
	            cout<<(n+i)<<endl;
	            
	        }
	        else
	        {
	            while(digitsum(n+i)%2!=0)
	            {
	                i++;
	                if(digitsum(n+i)%2==0)
	                    {
            	            cout<<(n+i)<<endl;
	                     }
	            }
	        }
	        
	    }
	}
	return 0;
}
