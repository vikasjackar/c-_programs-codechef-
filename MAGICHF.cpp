#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,s;
	    cin>>n>>x>>s;
	    int a[s],b[s];
	    for(int i=0;i<s;i++)
	    {
	        cin>>a[i]>>b[i];
	    }
	    for(int i=0;i<s;i++)
	    {
	        if(a[i]==x)
	        {
	            x=b[i];
	        }
	        else if(b[i]==x)
	        {
	            x=a[i];
	        }
	    }
	    cout<<x<<endl;
	}
	return 0;
}
