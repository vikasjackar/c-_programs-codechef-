#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int f(int x,int a,int b)
{
    int res=(b|x) - (a&x);
    return res;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int temp=pow(2,c);
	    int arr[temp];
	    for(int i=0;i<temp;i++)
	    {
	        arr[i]=f(i,a,b);
	    }
	    sort(arr,arr+temp);
	    int count=1;
	    int k=temp-1;
	    while(arr[k]==arr[k-1])
	    {
	        count++;
	        k--;
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
