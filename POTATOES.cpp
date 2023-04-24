#include <iostream>
using namespace std;

bool isprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
    
}
int nextprime(int n)
{
    n++;
    int flag=1;
    while(flag!=0)
    {
        if(isprime(n))
        {
            flag=0;
            break;
            return n;
        }
        else
        n++;
    }
    return n;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int sum=x+y;
	    int temp=nextprime(sum);
	    cout<<(temp-sum)<<endl;
	}
	return 0;
}
