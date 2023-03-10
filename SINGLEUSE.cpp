#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int h,x,y,count=1;
	    cin>>h>>x>>y;
	    h=h-y;
	    if(h<=0)
	    {
	        cout<<count<<endl;
	    }
	    else
	    {
	        count = count + h/x ;
	        if(h%x!=0)
	        count++;
	        
	        cout<<count<<endl;
	    }
	    
	}
	return 0;
}
