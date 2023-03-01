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
	    char s[n];
	    int i=0,count=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>s[i];
	        if(s[i]=='1')
	        count++;
	    }
	    if(n%2==0)
	    {
	        if(count%2==0)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        if(count%2!=0)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	        
	    }
	    
	    
	}
	return 0;
}
