#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    int temp=x/10;
	    int rem=x%10;
	    int ans=0;
	    if(rem>=5)
	    ans=100 - (temp+1)*10;
	    else
	    ans=100 - (temp*10);
	    
	    cout<<ans<<endl;
	   
	}
	return 0;
}
