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
#define imx INT_MAX                                 // imx - INT_MAX
#define imn INT_MIN                                 // imn - INT_MIN
#define con const int c=1e                          // con - constant

#define vii vector<int>v(n);\
            for(int i=0;i<n;i++)cin>>v[i];          // vii - vector integer input
#define vli vector<lli>v(n);\
            for(int i=0;i<n;i++)cin>>v[i];          // vli - vector long long input

int main(){
    tourist

    int t;cin>>t;
    while(t--){
        int n,k,sum=0,ind;cin>>n>>k;vii
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<n;i++){
            if(sum+v[i]<=k)sum+=v[i],ind=i+1;
            else break;
        }
        cout<<k-sum;tnl
    }

    return 0;
}
