#include <iostream>
using namespace std;

// int sumo(int a[],int n)
// {
//     int s=0;
//     for(int i=0;i<n;i++)
//     {
//         s=s+a[i];
//     }
//     return s;
    
    
// }


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n+k];
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	       sum=sum+a[i];
	    }
	    if(sum%2==0 && k==1)
	    cout<<"odd"<<endl;
	    else if(sum%2!=0 && k==1)
	    cout<<"even"<<endl;
	    else
	    cout<<"even"<<endl;
	   
	}
	return 0;
}
