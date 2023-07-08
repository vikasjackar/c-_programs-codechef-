#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0)
	{
	    long long int n;
	    cin>>n;
	    
	    vector<int> v;
	    for(int i = 0; i<n; i++)
	    {
	        long long int a;
	        cin>>a;
	        v.push_back(a);
	    }
	    
	    long long int ans = ((n-1)*(n))/2;
	    cout<<ans<<endl;
	}
	return 0;
}