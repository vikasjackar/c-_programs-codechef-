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
	    string c;
	    cin>>c;
	    int temp[n];
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]==c[i])
	        {
	            temp[i]=1;
	        }
	        else if(c[i]=='N')
	        {
	            temp[i]=-1;
	        }
	        else
	        temp[i]=0;
	    }
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        if(temp[i]==1)
	        {
	            sum=sum + 1;
	        }
	        else if(temp[i]==0)
	        {
	            i++;
	        }
	    }
	    cout<<sum<<endl;
	    
	    
	}
	return 0;
}
