#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a;
	    unordered_map<int,int> m;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a;
	        if(i+1==a)
	        {
	            m[a]=-n;//setting negative value eliminates student a.
	        }
	        m[a]++;
	    }
	    int count=0;
	    for(auto &val:m)
	    {
	        if(val.second>=k)
	        {
	            count++;
	        }
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}