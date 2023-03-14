#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	long long int c[n];
	int t[n];
	int i=0;
	for(i=0;i<n;i++)
	{
	    cin>>c[i];
	}
	for(i=0;i<n;i++)
	{
	    cin>>t[i];
	}
	int a=0,b=0,d=0;
	for(i=0;i<n;i++)
	{
	    if(t[i]==3)
	    {
	        if(a==0)
	        {
	            a=c[i];
	        }
	        else if(c[i]<a)
	        a=c[i];
	    }
	    else if(t[i]==1)
	    {
	        if(b==0)
	        b=c[i];
	        else if(c[i]<b)
	        b=c[i];
	    }
	    else if(t[i]==2)
	    {
	        if(d==0)
	        d=c[i];
	        else if(c[i]<d)
	        d=c[i];
	    }
	}
	if((b+d)<a)
	cout<<(b+d)<<endl;
	else
	cout<<a<<endl;
	return 0;
}
