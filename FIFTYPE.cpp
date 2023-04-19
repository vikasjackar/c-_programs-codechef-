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
	    int temp;
	    if(n==50)
	    temp=0;
	    else if(n>50)
	    {
	        int x=n-50;
	        if(x%3==0)
	        {
	            temp=x/3;
	        }
	        else
	        {
	            temp=(x/3) + 2*(x%3); 
	        }
	        
	    }
	    else
	    {
	        int x=50-n;
	        if(x%2==0)
	        temp=(x/2);
	        else
	        temp=(x/2) + 3;
	    }
	    cout<<temp<<endl;
	}
	return 0;
}
