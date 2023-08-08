#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,t,i;
	string s;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cin>>s;
	    int c=0;
	    for(i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	        {
	            c++;
	        }
	        else
	        {
	            break;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}