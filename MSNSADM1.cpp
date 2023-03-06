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
	    int a[n],b[n];
	    int i=0,j=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(j=0;j<n;j++)
	    {
	        cin>>b[j];
	    }
	    int temp[n];
	    int maximum=0;
	    for(i=0;i<n;i++)
	    {
	        temp[i]=(20 * a[i]) - (10 * b[i]);
	        if(temp[i]<0)
	        {
	            temp[i]=0;
	        }
	        if(temp[i]>=maximum)
	        {
	            maximum=temp[i];
	        }
	    }
	    cout<<maximum<<endl;
	   
	}
	return 0;
}
