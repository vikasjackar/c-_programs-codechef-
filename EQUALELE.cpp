#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int i=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int max=0;
	    for(i=0;i<n;i++)
	    {
	        int temp=count(a,a+n,a[i]);
	        if(temp>max)
	        max=temp;
	    }
	    cout<<n-max<<endl;
	}
	return 0;
}
