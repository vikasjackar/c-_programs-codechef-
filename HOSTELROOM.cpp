#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int max=x,tt=x,a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]>=0)
	        {
	        tt=tt+a[i];
	        if(tt>max)max=tt;
	        }
	        else
	        {
	        tt=tt-abs(a[i]);
	         if(tt>max)max=tt;
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}