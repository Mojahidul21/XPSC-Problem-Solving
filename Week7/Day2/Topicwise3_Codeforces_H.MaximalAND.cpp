#include<bits/stdc++.h>
using namespace std;

#define tourist ios::sync_with_stdio(0);cin.tie(0); // tourist - fast input output

#define pss <<' '                                   // pss - print single space
#define pnl cout<<'\n';                             // pnl - print new line
#define tnl if(t)pnl                                // tnl - testcase new line

#define pye cout<<"YES";                            // pye - print YES
#define pno cout<<"NO";                             // pno - print NO
#define pyn ?cout<<"YES":cout<<"NO";                // pyn - print YES/NO
#define pny ?cout<<"NO":cout<<"YES";                // pny - print NO/YES

#define lli long long                               // lli - long long
#define imx INT_MAX;                                // imx - INT_MAX
#define imn INT_MIN;                                // imn - INT_MIN
#define con const int c=1e                          // con - constant

#define vii vector<int>v(n);\
            for(int i=0;i<n;i++)cin>>v[i];          // vii - vector integer input
#define vli vector<lli>v(n);\
            for(int i=0;i<n;i++)cin>>v[i];          // vli - vector long long input

int t,n,i,j,k,ans,cnt,a[200001];

int main(){
    tourist

    cin>>t;
    while(t--){
        cin>>n>>k;
        for(i=1;i<=n;++i)cin>>a[i];
        ans=0;
        for(i=30;i>=0;--i){
            cnt=0;
            for(j=1;j<=n;++j)if(!(a[j]&(1<<i)))cnt++;
            if(k>=cnt)k-=cnt,ans|=1<<i;
        }
        cout<<ans;tnl
    }

    return 0;
}
