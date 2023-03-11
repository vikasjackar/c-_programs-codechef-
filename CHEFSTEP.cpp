#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,k;
	    cin>>n>>k;
	    long long int a[n];
	    int i=0;
	    string s;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]%k==0)
	        s = s + "1";
	        else
	        s= s + "0";
	    }
	    cout<<s<<endl;
	}
	return 0;
}
