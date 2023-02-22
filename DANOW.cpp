#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,q;
	cin>>n>>q;
	long int a[n];
	long int b[n];
	int i=0;
	for(i=1;i<=n;i++)
	{
	    cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
	    cin>>b[i];
	}
	
	while(q--)
	{
	    int l,r;
	    cin>>l>>r;
	    long int temp=0;
	    for(i=l;i<=r;i++)
	    {
	        temp=temp + a[i]*b[i];
	    }
	    cout<<temp<<endl;
	}
	return 0;
}
