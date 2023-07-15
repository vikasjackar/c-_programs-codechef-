#include<bits/stdc++.h>
using namespace std;
#define l long long int 
int main(){
   l t;
   cin>>t;
   while(t--){
       l a;
       cin>>a;
       l s[a];
       for(int i=0;i<a;i++) cin>>s[i];
       sort(s,s+a);
       l ans=0;
       if(s[a-1]!=s[a-2]){
           l b=s[a-2];
           for(int i=a-2;i>=0;i--){
               if(s[i]==b){
                   ans++;
               }
               else{
                   break;
               }
           }
       } else{
           l b=s[a-1];
           l dem=0;
           for(int i=a-1;i>=0;i--){
               if(b==s[i]){
                   dem++;
               }
               else {break;}
           } ans=(dem*(dem-1))/2;
       } l sus=(a*(a-1))/2;
       double res=ans/double(sus);
       cout<<fixed<<setprecision(8)<<res<<endl;
   }
}
