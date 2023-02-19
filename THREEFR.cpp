#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b,c;
	    cin >>a>>b>>c;
	    int flag=0;
	    if((a+b)==c || (b+c==a) || (c+a==b))
	    flag=1;
	    else
	    flag=0;
	    
	    if(flag==1)
	    cout<<"yes"<<endl;
	    else
	    cout<< "no"<<endl;
	}
	return 0;
}
