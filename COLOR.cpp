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
	    int r=0,g=0,b=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='R')
	        r++;
	        else if(s[i]=='G')
	        g++;
	        else
	        b++;
	    }
	    if(r>=b && r>=g)
	    cout<<(n-r)<<endl;
	    else if(b>=r && b>=g)
	    cout<<(n-b)<<endl;
	    else
	    cout<<(n-g)<<endl;
	}
	return 0;
}
