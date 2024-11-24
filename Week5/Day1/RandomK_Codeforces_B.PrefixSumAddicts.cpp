#include<bits/stdc++.h>
using namespace std;

#define tourist ios::sync_with_stdio(0);cin.tie(0); // tourist - fast input output

#define pss <<' '                                   // pss - print single space
#define pnl cout<<'\n';                             // pnl - print new line
#define tnl if(t)pnl                                // tnl - testcase new line

#define pye cout<<"YES";                            // pye - print YES
#define pno cout<<"NO";                             // pno - print NO
#define pyn ?cout<<"YES":cout<<"NO";                // pyn - print YES/NO

#define lli long long                               // lli - long long
#define imx INT_MAX;                                // imx - INT_MAX
#define imn INT_MIN;                                // imn - INT_MIN
#define con const int c=1e                          // con - constant

#define vii vector<int>v(n);\
            for(int i=0;i<n;i++)cin>>v[i];          // vii - vector integer input
#define vli vector<lli>v(n);\
            for(int i=0;i<n;i++)cin>>v[i];          // vli - vector long long input
int main(){
    tourist

    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;vector<lli>s(n+1),a(n+1);
        for(int i=n-k+1;i<n+1;i++)cin>>s[i];
        for(int i=n-k+2;i<n+1;i++)a[i]=s[i]-s[i-1];
        bool soloid=k==1,sorted=is_sorted(a.begin()+n-k+2,a.end()),structured=s[n-k+1]<=a[n-k+2]*(n-k+1);
        soloid||(sorted&&structured)pyn tnl
    }

    return 0;
}
