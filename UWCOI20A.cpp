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
	    int i=0,max=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]>max)
	        {
	            max=a[i];
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
