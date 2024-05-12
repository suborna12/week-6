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
void s(){
 ll n,x;
 cin>>n>>x;
 vector<ll>a(n);
 ll mx=INT_MIN;
 for(ll i=0;i<n;i++) {cin>>a[i];
 mx=max(mx,a[i]);
 }
 ll l=0,r=mx*x+1;
 ll ans;
 while(l<=r){
    ll mid=l+(r-l)/2;
    ll cnt=0;
    for(ll i=0;i<n;i++){
        cnt+=(mid/a[i]);
        if(cnt>=x) break;
    }
    if(cnt>=x) {
        ans=mid;
        r=mid-1;
    }
    else l=mid+1;
 }
 cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
     //cin>>t;
    while(t--)
    {
        s();
    }
}
