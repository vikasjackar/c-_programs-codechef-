#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b;
	    cin>>n>>a>>b;
	    int sum=0;
	    for(int i=1;i<=n;i++)
	    {
	        if(i%2==0)
	        sum=sum+a;
	        else
	        sum=sum+b;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
