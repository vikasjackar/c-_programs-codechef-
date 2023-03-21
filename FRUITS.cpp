#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,k,a;
	    cin>>n>>m>>k;
	    if(n<m){
			a=n;
			n=m;
			m=a;
		}
		else if(n>m){
		    a=m;
		    m=n;
		    n=a;
		}
		if(n>(m+k)){
			cout << n-(m+k) << endl;
		}
		else if(m>(n+k)){
			cout << m-(n+k) << endl;
		}
		else{
			cout << 0 << endl;
		}
	}
	return 0;
}
