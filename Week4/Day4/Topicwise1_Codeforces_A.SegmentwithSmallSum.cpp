#include<bits/stdc++.h>
using namespace std;

#define tourist ios::sync_with_stdio(0);cin.tie(0); // tourist - fast input output

#define pss <<' '                                   // pss - print single space
#define pnl cout<<'\n';                             // pnl - print new line

#define py  cout<<"YES";                            // py  - print YES
#define pn  cout<<"NO";                             // pn  - print NO
#define pyn ?cout<<"YES":cout<<"NO";                // pyn - print YES/NO

#define ll  long long                               // ll  - long long
#define imx INT_MAX;                                // imx - INT_MAX
#define imn INT_MIN;                                // imn - INT_MIN
#define con const int c=1e                          // con - constant

int main(){
    tourist

    ll n,s;
    cin>>n>>s;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];

    ll sum=0,len=0,mx=0;
    for(ll i=0,j=0;j<n;j++){
        sum+=v[j];
        while(sum>s)sum-=v[i],i++;
        len=j-i+1,mx=max(mx,len);
    }
    cout<<mx;

    return 0;
}
