#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,d, risk=0;
	    cin>>n>>d;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	        if( a[i]>=80 || a[i]<=9){
	            risk++;
	        }
	    }
	    int m,nr, o;
	    if( risk%d !=0){
	      m= (risk/d) +1;
	    }
	    else{
	        m=(risk/d);
	    }
	    nr= n-risk;
	    if( nr%d !=0){
	      o= (nr/d) +1;
	    }
	    else{
	        o=(nr/d); 
	    }
	    cout<<m+o<<endl;
	}
	return 0;
}
