#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,q;
	    cin>>n>>q;
	    int a[n];
	    int sum=0;
	    for(int i=1;i<=n;i++)
	    {
	        cin>>a[i];
	        sum=sum+a[i];
	    }
	    for(int i=1;i<=q;i++)
	    {
	        int l,r;
	        cin>>l>>r;
	        int temp=r - l + 1;
	        if(temp%2!=0)
	        sum=sum + 1;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
