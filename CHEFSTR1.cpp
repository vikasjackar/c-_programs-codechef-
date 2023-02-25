#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,i=0;
	    cin>>n;
	    long long int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    long int sum=0;
	    for(i=1;i<n;i++)
	    {
	        if (abs(a[i-1]-a[i])==0)
            {
                sum+=0;
            }
            else
	        sum=sum + abs(a[i-1] - a[i]) - 1;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
