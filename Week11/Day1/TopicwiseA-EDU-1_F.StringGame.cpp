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

    string t,p;cin>>t>>p;int tt=t.size(),pp=p.size();vector<int>a(tt);
    for(int i=0;i<tt;++i)cin>>a[i];

    auto ok=[&](int mid){
        string tmp=t;
        for(int i=0;i<mid;++i)tmp[a[i]-1]='অ';

        int flag=0;
        for(int i=0;i<tt;++i){
            if(tmp[i]==p[flag]){
                ++flag;
                if(flag==pp)return true;
            }
        }
        return false;
    };

    int l=0,r=tt-1,m,ans;
    while(l<=r)m=l+(r-l)/2,ok(m)?ans=m,l=m+1:r=m-1;

    cout<<ans;

    return 0;
}
