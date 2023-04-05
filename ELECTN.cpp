#include <bits/stdc++.h>
typedef long long ll;
#define vi vector<long long>
#define pi pair<int, int>
#define vpi vector<pair<int, int>>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = b; i >= a; i--)
#define error(x) cout << x << " ";
#define MOD 998244353
using namespace std;
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll n,x;
    cin>>n>>x;
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ll curr;
        cin>>curr;
        if(curr>=x)
            ans++; 
    }
    cout<<ans<<endl;
  }
  return 0;
}