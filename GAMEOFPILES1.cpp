#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long int a[n];
	    long int ct=0;
	    bool flag=false;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	         if(a[i]%2!=0)ct++;
	         if(a[i]==1)flag=true;
	       
	    }
	    if(flag)cout<<"CHEF"<<endl;
	    else if(ct%2!=0)cout<<"CHEF"<<endl;
	    else cout<<"CHEFINA"<<endl;
	   
	    
	    
	    
	}
	return 0;
}
