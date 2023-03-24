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
	    int i=0,min=INT_MAX;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]<min)
	        {
	            min=a[i];
	        }
	    }
	    int count=0;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>min)
	        count++;
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
