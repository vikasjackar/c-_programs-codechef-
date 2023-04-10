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
	    int a,b,c;
	    a=1;
	    int temp=(x*3) - 1;
	    c=temp%3;
	    temp=temp/3;
	    b=temp*3;
	    
	    
	    cout<<a<<" "<<b<<" "<<c<<endl;
	}
	return 0;
}
