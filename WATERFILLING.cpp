#include <iostream>
using namespace std;

int main() { 
  
    int t; cin>>t; 
    while(t--){
          int a,b,c; 
         cin>>a>>b>>c;  
         int increase=0; 
         if(a==0) increase++; 
         if(b==0) increase++;
         if(c==0) increase++;
        if(increase>=2) 
        cout<<"Water filling time"<<endl;  
        else 
        cout<<"Not now"<<endl;
     }
	// your code goes here
	return 0;
}
