#include <iostream>
#include<climits>
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
	    int i=0,min=INT_MAX,max=INT_MIN,maxi=0,mini=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]>max)
	        {
	            max=a[i];
	            maxi=i;
	        }
	        if(a[i]<min)
	        {
	            min=a[i];
	            mini=i;
	        }
	    }
	    if(mini>maxi)
	    cout<<max<<" "<<min<<endl;
	    else
	    cout<<min<<" "<<max<<endl;
	}
	return 0;
}
