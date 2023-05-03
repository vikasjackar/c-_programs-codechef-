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
	    for(int i=1;i<=n;i++)
	    {
	        cin>>a[i];
	    }
	    int count=0;
	    for(int l=1;l<n;l++)
	    {
	        int f=0;
	        for(int r=l+1;r<=n;r++)
	        {
	            f= f + (a[r-1]-a[r]);
	            if(f!=(a[r]-a[l]))
	            {
	            count++;
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
