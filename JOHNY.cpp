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
	    int i=0;
	    for(i=1;i<=n;i++)
	    {
	        cin>>a[i];
	    }
	    int k;
	    cin>>k;
	    int temp=a[k];
	    int count=0;
	    for(i=1;i<=n;i++)
	    {
	        if(a[i]<temp)
	        {
	            count++;
	        }
	    }
	    cout<<count+1<<endl;
	}
	return 0;
}
