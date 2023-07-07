#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <limits>
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
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int diff=INT_MAX;
	    for(int i=1;i<n;i++)
	    {
	        int temp=abs(a[i-1]-a[i]);
	        if(temp<diff)
	        {
	            diff=temp;
	        }
	    }
	    cout<<diff<<endl;
	}
	return 0;
}
