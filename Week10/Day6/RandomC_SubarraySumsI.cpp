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

    int n,x,l=0,r=0,ans=0;lli sum=0,cursum;cin>>n>>x;vector<int>a(n);
    for(auto&e:a)cin>>e;

    while(r<n){
        cursum=sum+a[r];
        if(cursum<x)sum=cursum,++r;
        else if(cursum==x)sum=x,++ans,++r;
        else{
            sum=max(0ll,sum-a[l]),++l;
            if(l>r)++r;
        }
    }

    cout<<ans;

    return 0;
}
