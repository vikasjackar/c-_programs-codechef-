#include <iostream>
#include<climits>
using namespace std;

int main() {
	// your code goes here
	int n,q;
	cin>>n>>q;
	int a[n];
	int i=0,max=INT_MIN,min=INT_MAX;
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	    if(a[i]>max)
	    max=a[i];
	    
	    if(a[i]<min)
	    min=a[i];
	}
	while(q--)
	{
	    int temp;
	    cin>>temp;
	    if(temp>=min && temp<=max)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
