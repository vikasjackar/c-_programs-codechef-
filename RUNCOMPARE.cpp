#include <iostream>
using namespace std;

int main() {
	// your code goes here.
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int b[n];
	    int i=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    int count=0;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]<=(2*b[i]) && b[i]<=(2*a[i]))
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
