#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string u;
	    cin>>u;
	    char s[n];
	    int k=0;
	    for(int i=0;i<n;)
	    {
	        if(u[i]==u[i+1])
	        {
	            int count=2;
	            int m=i+1;
	            while(u[m]==u[m+1])
	            {
	                count++;
	                m++;
	            }
	            if((count-3)%2==0)
	            {
	                s[k]=u[i];
	                k++;
	                i=m+1;
	            }
	            else
	            {
	                s[k]=u[i];
	                k++;
	                s[k]=u[i];
	                k++;
	                i=m+1;
	            }
	        }
	        else
	        {
	            s[k]=u[i];
	            k++;
	            i++;
	        }
	        
	    }
	    for(int i=0;i<k;i++)
	    {
	        cout<<s[i];
	    }
	    cout<<endl;
	}
	return 0;
}
