#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.size();
	    sort(s.begin(),s.end());
	    vector<int> count;
	    for(int i=0;i<n;i++)
	    {
	        int tc=1;
	        while(s[i]==s[i+1])
	        {
	            tc++;
	            i++;
	        }
	        count.push_back(tc);
	    }
	    int m=count.size();
	    int sum=0;
	    sort(count.begin(),count.end());
	    for(int i=0;i<m;i++)
	    {
	        sum=sum+count[i];
	    }
	    if(count[m-1]==(sum-count[m-1]))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
