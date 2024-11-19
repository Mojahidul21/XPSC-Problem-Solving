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

int t,n,m,mx;

int main(){
    tourist

    cin>>t;
    while(t--){
        cin>>n;
        m=n*(n-1)/2;
        vector<int>v(m);
        mx=imn;
        for(int i=0;i<m;i++){cin>>v[i];mx=max(mx,v[i]);}
        sort(v.begin(),v.end());
        for(int i=0;i<m;n--,i+=n)cout<<v[i]pss;
        cout<<mx;
        if(t)pnl
    }

    return 0;
}
