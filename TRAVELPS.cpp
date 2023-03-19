#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b;
	    cin>>n>>a>>b;
	    string s;
	    cin>>s;
	    int z=0,o=0,i=0;
	    for(i=0;i<n;i++)
	    {
	        if(s[i]=='0')
	        z++;
	        else
	        o++;
	    }
	    int result;
	    result = (a*z) +(o*b);
	    cout<<result<<endl;
	}
	return 0;
}
