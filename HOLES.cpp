#include <iostream>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.length();
	    int i=0,count=0;
	    for(i=0;i<n;i++)
	    {
	        if(s[i]=='A' || s[i]=='D' || s[i]=='O' || s[i]=='P' || s[i]=='R' || s[i]=='Q')
	        count++;
	        else if(s[i]=='B')
	        count=count + 2;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
