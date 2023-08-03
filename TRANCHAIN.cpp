#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> v;
        for(int i = 0; i<n; i++){
            string s;
            cin>>s;
            v.push_back(s);
        }
        int a_=0,b=0,ab=0,o=0;
        for(int i = 0; i<v.size(); i++){
            if(v[i]=="A") a_++;
            else if(v[i]=="B") b++;
            else if(v[i]=="O") o++;
            else ab++;
        }
        if(o==0){
            int p = max(a_,b);
            cout<<p+ab<<endl;
        }else{
            int p = max(a_,b);
            cout<<p+o+ab<<endl;
        }
        // cout<<a_<<" "<<b<<" "<<ab<<" "<<o<<endl;
    }
}