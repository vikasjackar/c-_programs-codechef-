#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int m,x,y;
	    cin>>m>>x>>y;
	    
	    int v[m];
	    
	    for(int i = 0; i<m; i++){
	        cin>>v[i];
	    }
	    
	    int vec[101] = {0};
	    int cnt = 0;
	    
	    for(int i = 0; i<m; i++){
	        
	        int min = 1, max = 100;
	        
	        if(v[i]-x*y > 0){
	            min = v[i]-x*y;
	        }
	        
	        if(v[i]+x*y < 100){
	            max = v[i]+x*y;
	        }
	        
	        for(int i = min; i<=max; i++){
	            vec[i] = 1;
	        }
	        
	    }
	    
	    for(int i = 1; i<102; i++){
	        if(vec[i] == 1){
	            cnt++;
	        }
	    }
	    
	    
	    cout<<100-cnt<<endl;
	   
	    
	}
	return 0;
}
