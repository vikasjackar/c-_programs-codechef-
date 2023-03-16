#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.length();
	    int count=0;
	    int i=0;
	    if(s[0]=='1')
	    count++;
	    
	    for(i=1;i<n;i++)
	    {
	        if(s[i]=='1' && s[i-1]=='0')
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
