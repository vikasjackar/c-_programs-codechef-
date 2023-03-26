#include <iostream>
using namespace std;
int sumd(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    return sum;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    int i=0,one=0,two=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i]>>b[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        int temp1=sumd(a[i]);
	        int temp2=sumd(b[i]);
	        if(temp1>temp2)
	        one++;
	        else if(temp2>temp1)
	        two++;
	        else if(temp1==temp2)
	        {
	            one++;
	            two++;
	        }
	    }
	    if(one>two)
	    {
	        cout<<"0 "<<one<<endl;
	    }
	    else if(two>one)
	    {
	        cout<<"1 "<<two<<endl;
	    }
	    else
	    {
	        cout<<"2 "<<one<<endl;
	    }
	   //cout<<one<<two<<endl;
	    
	}
	return 0;
}
