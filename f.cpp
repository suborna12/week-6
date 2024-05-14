#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define nl cout << endl
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
#define all(x) x.begin(),x.end()
using namespace std;
void ss(){
 ll n,m;  cin>>n;
 vector<ll>a(n);
 for(ll i=0;i<n;i++) cin>>a[i];
 int r=0;
    for (ll k=1;k<=n;++k) {
      multiset<int>st(a.begin(),a.end());
      for (ll i=0;i<k;++i){
        auto it=st.upper_bound(k-i);
        if (it==st.begin()) break;
        st.erase(--it);
        if (!st.empty()){
          ll x=*st.begin();
          st.erase(st.begin());
          st.insert(x+k-i);
        }
      }
      if (st.size()+k==n) r=k;
    }
    cout<<r<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
     cin>>t;
    while(t--)
    {
        ss();
    }
}
