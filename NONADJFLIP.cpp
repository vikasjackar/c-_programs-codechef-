#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int count=0,zero=0,one=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='0')
	        zero++;
	        else
	        one++;
	        
	    }
	    if(zero==n)
	    count=0;
	    else if(one==1 && n==1)
	    count=1;
	    else if(one==n)
	    {
	        count=2;
	    }
	    else
	    {
	        count=1;
	        for(int i=0;i<n-1;i++)
	        {
	            if(s[i]=='1' && s[i+1]=='1')
	            count=2;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
