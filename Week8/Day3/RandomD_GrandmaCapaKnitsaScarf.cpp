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
#define con const int c=1e9                         // con - constant

#define aii vector<int>a(n);\
            for(int i=0;i<n;i++)cin>>a[i];          // aii - a-vector integer input
#define bii vector<int>b(n);\
            for(int i=0;i<n;i++)cin>>b[i];          // bii - b-vector integer input
#define ali vector<lli>a(n);\
            for(int i=0;i<n;i++)cin>>a[i];          // ali - a-vector long long input
#define bli vector<lli>b(n);\
            for(int i=0;i<n;i++)cin>>b[i];          // bli - b-vector long long input

int main(){
    tourist

    int t;cin>>t;
    while(t--){
        int n;string s;cin>>n>>s;
        int ans=n+1;
        for(char c='a';c<='z';++c){
            int l=0,r=n-1,cnt=0;
            while(l<r){
                if(s[l]==s[r])++l,--r;
                else if(s[l]==c)++cnt,++l;
                else if(s[r]==c)++cnt,--r;
                else{cnt=n+1;break;}
            }
            ans=min(ans,cnt);
        }
        cout<<(ans==n+1?-1:ans);
        tnl
    }

    return 0;
}
