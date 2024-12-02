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

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        vector<pair<int,int>>ab(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++){
            cin>>b[i];
            ab[i]={a[i],b[i]};
        }

        sort(ab.begin(),ab.end());
        if((max(ab[n-1].first,ab[n-1].second)>max(ab[n-2].first,ab[n-2].second))||(max(ab[n-1].first,ab[n-1].second)<max(ab[n-2].first,ab[n-2].second)))pye
        else{
            int mx=0;
            for(int i=0;i<=n-3;i++)mx=max(mx,ab[i].second);
            if(mx>max(ab[n-1].first,ab[n-1].second))pye
            else pno
        }
        tnl
    }

    return 0;
}
