#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        float n,x;
        cin>>n>>x;
        float r=n/2;
        if(r<x || r==x)
        cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
	// your code goes here
	return 0;
}
