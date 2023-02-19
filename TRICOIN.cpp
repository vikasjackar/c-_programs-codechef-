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
	    int temp=0,count=0,i=1;
	    while(1)
	    {
	        n=n-i;
	        i++;
	        if(n>=0)
	        count++;
	        else
	        break;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
