#include <iostream>
using namespace std;

int main() {
	int ts;
	cin>>ts;
	while(ts--)
	{
	    int n,m,a,b,c,d;
	    cin>>n>>m;
	  /*  if(n==m)
	    {
	        cout<<"yes";
	    }
	    else
	    {
	        a=n-1;
	        b=m+1;
	        c=n+3;
	        d=m-1;
	        if(a==b || c==d)
	        {
	            cout<<"yes";
	        }
	        else
	        {
	            cout<<"no";
	        }
	    }*/
	    a=(m+n)%2;
	    if(a==0)
	    {
	        cout<<"yes";
	    }
	    else
	    {
	        cout<<"no";
	    }
	    cout<<endl;
	}
	return 0;
}