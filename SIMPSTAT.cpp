#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    double sum=0;
	    double avg=0.000000;
	    for(int j=k;j<(n-k);j++)
	    {
	        sum=sum+arr[j];
	    }
	    avg=sum/(n - 2*k);
	    
	    cout<<fixed<<avg<<endl;
	    
	    
	}
	return 0;
}
