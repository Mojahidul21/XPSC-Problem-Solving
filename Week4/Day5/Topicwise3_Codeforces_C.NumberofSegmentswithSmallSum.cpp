#include<bits/stdc++.h>
using namespace std;

#define tourist ios::sync_with_stdio(0);\
                cin.tie(0);                         // tourist - fast input output

#define pss <<' '                                   // pss - print single space
#define pnl cout<<'\n';                             // pnl - print new line

#define pye cout<<"YES";                            // py  - print YES
#define pno cout<<"NO";                             // pn  - print NO
#define pyn ?cout<<"YES":cout<<"NO";                // pyn - print YES/NO

#define lli  long long                              // lli - long long int
#define imx INT_MAX;                                // imx - INT_MAX
#define imn INT_MIN;                                // imn - INT_MIN
#define con const int c=1e                          // con - constant
#define vin vector<int>v(n);\
            for(int i=0;i<n;i++)cin>>v[i];          // vin - vector input

int main(){
    tourist

    int n,l=0,r=0;lli s,sum=0,ans=0;
    cin>>n>>s;vin
    while(r<n){
        sum+=v[r];
        while(sum>s&&l<=r)sum-=v[l],l++;
        ans+=r-l+1,r++;
    }
    cout<<ans;

    return 0;
}
