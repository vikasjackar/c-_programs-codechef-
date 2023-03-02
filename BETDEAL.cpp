#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    a=(100 - a);
	    b=2*(100 - b);
	    if(a > b)
	    cout<<"SECOND"<<endl;
	    else if(b>a)
	    cout<<"FIRST"<<endl;
	    else
	    cout<<"BOTH"<<endl;
	}
	return 0;
}
