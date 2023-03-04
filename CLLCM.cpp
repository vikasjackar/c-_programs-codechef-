#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    
	    int a[n];
	    
	    for(int i =0; i < n; i++){
	        cin >> a[i];
	    }
	    
	    int m = 1;
	    
	    for(int i = 0; i < n; i++){
	        m = m * a[i];
	    }
	    
	    if(m%2 == 0){
	        cout << "NO" << endl;
	    }else{
	        cout << "YES" << endl;
	    }
	}
	return 0;
}