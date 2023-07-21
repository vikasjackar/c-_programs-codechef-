#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    float x,y,r;
	    cin>>x>>y>>r;
	    x=x + r/30;
	    int temp=ceil(x/y);
	    cout<<temp<<endl;
	}
	return 0;
}
