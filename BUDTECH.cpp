#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int r;
	    cin>>r;
	    int temp=r*1000;
	    temp=temp/10;
	    cout<<temp<<endl;
	}
	return 0;
}
