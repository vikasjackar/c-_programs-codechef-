#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int temp=(x-y);
	    int count=0,i=1;
	    while(temp>0)
	    {
	        count++;
	        temp=temp-i;
	        i++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
