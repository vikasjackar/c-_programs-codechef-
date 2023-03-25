#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.size();
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if((s[i]=='x' && s[i + 1]=='y') || (s[i]=='y' && s[i+1]=='x'))
	        {
	            count++;
	            i++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
