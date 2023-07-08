#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a1,a2,a3,b1,b2,b3;
	    cin>>a1>>a2>>a3>>b1>>b2>>b3;
	    int sum1=0;
	    int sum2=0;
	    if(a1<=a2 && a1<=a3)
	    {
	        sum1=a2+a3;
	    }
	    else if(a2<=a1 && a2<=a3)
	    {
	        sum1=a1+a3;
	    }
	    else
	    {
	        sum1=a1+a2;
	    }
	    
	    if(b1<=b2 && b1<=b3)
	    {
	        sum2=b2+b3;
	    }
	    else if(b2<=b1 && b2<=b3)
	    {
	        sum2=b1+b3;
	    }
	    else
	    {
	        sum2=b1+b2;
	    }
	    
	    if(sum1>sum2)
	    {
	        cout<<"Alice"<<endl;
	    }
	    else if(sum1<sum2)
	    {
	        cout<<"Bob"<<endl;
	    }
	    else
	    {
	        cout<<"Tie"<<endl;
	    }
	}
	return 0;
}
