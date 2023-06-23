#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007

void file()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}


ll binpow(ll a,ll b)
{
    ll ans = 1;
    while(b > 0)
    {
        if((b & 1) == 1) ans *= a;
        a *= a;
        b = b >> 1;
    }
    return ans;
}

ll gcd(ll a,ll b)
{
	if(b == 0) return a;
	return gcd(b, a%b);
}

ll lcm(ll a,ll b)
{
	return (a / gcd(a,b)) * b;
}

void solve(){
  
   int x;
   cin>>x;
   if(x<=3)
   {
       cout<<"BRONZE"<<endl;
   }
   else if(x<=6)
   {
       cout<<"SILVER"<<endl;
   }
   else
   {
       cout<<"GOLD"<<endl;
   }
}

int main(){
    file();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}