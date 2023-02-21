#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    float n,m;
	    cin>>n>>m;
	    int temp=0;
	    temp=ceil(n/2) * ceil(m/2);
	    cout<<temp<<endl;
	    
	}
	return 0;
}
