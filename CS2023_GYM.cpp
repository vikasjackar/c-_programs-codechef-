#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,m;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    cin>>n>>m;
	    if(m%2==0){
	        cout<<""<<(m/2)+1<<endl;
	    }else{
	        cout<<""<<(m+1)/2<<endl;
	    }
	}
	return 0;
}