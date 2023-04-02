#include <bits/stdc++.h>
using namespace std;
int sum(int n){
    int a=0;
    while(n){
        int r=n%10;
        a+=r;
        n=n/10;
    }
    return a;
}
int main() {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int r=a[i]*a[j];
                int c=sum(r);
                ans=max(ans,c);
            }
        }
	    cout<<ans<<endl;
	}
	return 0;
}
