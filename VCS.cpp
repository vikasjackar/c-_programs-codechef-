#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,k;
	    cin>>n>>m>>k;
	    int a[m];
	    int b[k];
	    int i=0;
	    for(i=0;i<m;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<k;i++)
	    {
	        cin>>b[i];
	    }
	    int one=0,two=0;
	    for(i=0;i<m;i++)
	    {
	        for(int j=0;j<k;j++)
	        {
	            if(a[i]==b[j])
	            {
	                one++;
	                break;
	            }
	        }
	    }
	    int flag=0;
	    for(i=1;i<=n;i++)
	    {
	        flag=0;
	        for(int j=0;j<m;j++)
	        {
	            if(i==a[j])
	            {
	                flag=1;
	                break;
	            }
	        }
	        if(flag==0)
	        {
	            for(int x=0;x<k;x++)
	            {
	                if(i==b[x])
	                {
	                    flag=1;
	                    break;
	                }
	            }
	        }
	        if(flag==0)
	        two++;
	    }
	    cout<<one<<" "<<two<<endl;
	    
	}
	return 0;
}
