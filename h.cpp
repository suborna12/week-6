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
const ll x=1000000000000;
unordered_set<ll>st;
void sh(){
    for(ll i=1;i*i*i<=x;i++){
        st.insert(i*i*i);
    }
}
void ss(){
 ll n;
 cin>>n;
 ll f=0;
 for(ll i=1;i<=n;i++){
    if(st.count(n-i*i*i)){
        f=1;
        break;
    }
 }
 if(f==1) yes;
 else no;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sh();
    ll t=1;
     cin>>t;
    while(t--)
    {
        ss();
    }
}
