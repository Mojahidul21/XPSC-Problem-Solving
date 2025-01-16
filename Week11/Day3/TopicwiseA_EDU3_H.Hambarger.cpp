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

    string str;lli nb,ns,nc,pb,ps,pc,r;cin>>str>>nb>>ns>>nc>>pb>>ps>>pc>>r;

    lli b=0,s=0,c=0;
    for(const auto&ch:str)++(ch=='B'?b:ch=='S'?s:c);

    lli ans1;
    if(b&&s&&c)ans1=min({nb/b,ns/s,nc/c});
    else if(b&&s)ans1=min(nb/b,ns/s);
    else if(b&&c)ans1=min(nb/b,nc/c);
    else if(s&&c)ans1=min(ns/s,nc/c);
    else if(b)ans1=nb/b;
    else if(s)ans1=ns/s;
    else ans1=nc/c;

    lli eb=nb-b*ans1,es=ns-s*ans1,ec=nc-c*ans1,left=0,right=1e12,middle,ans2;
    while(left<=right){
        middle=left+(right-left)/2;
        if(max(middle*b-eb,0ll)*pb+max(middle*s-es,0ll)*ps+max(middle*c-ec,0ll)*pc<=r)ans2=middle,left=middle+1;
        else right=middle-1;
    }

    cout<<ans1+ans2;

    return 0;
}
