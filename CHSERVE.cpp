#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    if((x+y)%(2*z)==0)
	    cout<<"CHEF"<<endl;
	    else
	    {
	        if((x+y)%(2*z)<z)
	        cout<<"CHEF"<<endl;
	        else
	        cout<<"COOK"<<endl;
	    }
	}
	return 0;
}
