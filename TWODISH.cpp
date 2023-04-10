#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b,c;
	    cin>>n>>a>>b>>c;
	    int count=0;
	    int temp=a+c;
	    if(temp<=b)
	    count=temp;
	    else
	    count=b;
	    
	    if(count>=n)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
