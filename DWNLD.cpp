#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int temp=n;
	    
	    int sum=0;
	    while(n--){
	        int a,d;
	        cin>>a>>d;
	        if(k>=a){
	            k-=a;
	        }
	        else{
	            sum+=(a-k)*d;
	            k=0;
	        }
	    }
	    cout<<sum<<endl;
	    
	   
	}
	return 0;
}
