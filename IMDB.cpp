#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int s[2*n];
	    int i=0,m=2*n;
	    for(i=0;i<m;i=i+2)
	    {
	        cin>>s[i]>>s[i + 1];
	    }
	    int rate=0,size=0;
	    for(i=1;i<m;i=i+2)
	    {
	        if(s[i]>rate)
	        {
	            if(s[i-1]<=x)
	            {
	                rate=s[i];
	            }
	        }
	    }
	    cout<<rate<<endl;
	    
	}
	return 0;
}
