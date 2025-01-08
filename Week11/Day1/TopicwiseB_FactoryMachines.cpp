#include<bits/stdc++.h>
using namespace std;

#define tourist ios::sync_with_stdio(0);cin.tie(0); // tourist - fast input output

#define pss <<' '                                   // pss - print single space
#define lss if(i!=n-1)cout<<' ';                    // lss - !(last single space)
#define pnl cout<<'\n';                             // pnl - print new line
#define tnl if(t)pnl                                // tnl - testcase new line

#define pye cout<<"YES";                            // pye - print YES
#define pno cout<<"NO";                             // pno - print NO
#define pyn ?cout<<"YES":cout<<"NO";                // pyn - print YES/NO
#define pny ?cout<<"NO":cout<<"YES";                // pny - print NO/YES

#define lli long long                               // lli - long long
#define imx INT_MAX;                                // imx - INT_MAX
#define imn INT_MIN;                                // imn - INT_MIN
#define con const int c=1e9                         // con - constant
#define mod %1000000007                             // mod - modular

#define aii vector<int>a(n);\
            for(int i=0;i<n;i++)cin>>a[i];          // aii - a-vector integer input
#define bii vector<int>b(n);\
            for(int i=0;i<n;i++)cin>>b[i];          // bii - b-vector integer input
#define ali vector<lli>a(n);\
            for(int i=0;i<n;i++)cin>>a[i];          // ali - a-vector long long input
#define bli vector<lli>b(n);\
            for(int i=0;i<n;i++)cin>>b[i];          // bli - b-vector long long input

#define gnp goto print;                             // gnp - go n print
#define pnt print:cout<<                            // pnt - print

int main(){
    tourist

    lli n,t;lli l=1e18,r=1,m,mn,cnt,ans;cin>>n>>t;unordered_map<lli,int>mp;
    while(n--)cin>>m,l=min(l,m),r=max(r,m),++mp[m];
    mn=r*=t;

    while(l<=r){
        m=l+(r-l)/2;
        if(m>=mn)ans=m,r=m-1;
        else{
            cnt=0;
            for(auto const&[k,v]:mp){
                lli tmp=m/k;
                if(tmp>=(t-cnt+v-1)/v){cnt=t,ans=mn=m,r=m-1;break;}
                cnt+=tmp*v;
            }
            if(cnt<t)l=m+1;
        }
    }

    cout<<ans;

    return 0;
}
