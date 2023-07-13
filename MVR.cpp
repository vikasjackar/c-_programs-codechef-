#include<bits/stdc++.h>
using namespace std;

void solve(){
  
   int  a,b,x,y;
   cin>>a>>b>>x>>y;
   int m=2*a+b;
   int r=2*x+y;
   
   if(m>r)
   {
       cout<<"Messi"<<endl;
   }
   else if(m==r)
   {
       cout<<"Equal"<<endl;
   }
   else
   {
       cout<<"Ronaldo"<<endl;
   }
}

int main(){
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}