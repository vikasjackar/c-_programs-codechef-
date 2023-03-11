#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    float n;
	    cin>>n;
	    float fun=pow((0.143*n),n);
	    if(fun-floor(fun)<0.5)
	    cout<<floor(fun)<<endl;
	    else
	    cout<<ceil(fun)<<endl;
	}
	return 0;
}
