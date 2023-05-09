#include<bits/stdc++.h>
using namespace std;
#define l long long int 
int main(){
    l t;
    cin>>t;
    while(t--){
        l a,b;
        cin>>a>>b;
        if(a%b==0) cout<<0<<endl;
        else cout<<1<<endl;
    }
}