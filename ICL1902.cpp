#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int count=0;
	    while(n!=0)
	    {
	        int temp=sqrt(n);
	        count++;
	        if(temp*temp == n)
	        {
	            break;
	        }
	        n = n -(temp*temp);
	    }
	    cout<<count<<endl;
	}
	return 0;
}
