#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--)
	{
	    int m;
	    cin>>m;
	    if(m%2==0)
	    cout<<m/2<<endl;
	    else
	    cout<<-(m/2+1)<<endl;
	}
	return 0;
}
