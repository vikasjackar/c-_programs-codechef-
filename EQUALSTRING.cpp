#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0,sum=0;
	    cin>>n;
	    string a,b;
	    cin>>a>>b;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==b[i])
	            b[i]='0';
	        else{
	            for(int j=i-1;j>=0;j--)
	            {
	                if(b[i]==b[j]){
	                    count=1;
	                    break;
	                }
	                else
	                    count=0;
	            }
	            if(count==0)
	                sum++;
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
