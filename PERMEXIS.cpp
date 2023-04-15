#include <iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        
	    }
	    
	    sort(arr,arr+n);
	    int i;
	    for( i=0;i<n-1;i++){
	        int x= abs(arr[i+1]-arr[i]);
	        if(x>1){
	            cout<<"NO"<<endl;
	            break;
	        }
	        
	    }
	    
	    if(i>=n-1){
	        cout<<"YES"<<endl;
	    }
	    
	    
	    
	    
	    
	    
	}
	return 0;
}