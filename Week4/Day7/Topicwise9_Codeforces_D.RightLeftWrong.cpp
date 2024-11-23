#include<bits/stdc++.h>
using namespace std;

#define tourist ios::sync_with_stdio(0);cin.tie(0); // tourist - fast input output

#define pss <<' '                                   // pss - print single space
#define pnl cout<<'\n';                             // pnl - print new line

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
        int n;cin>>n;vector<lli>presum(n+1,0);
        for(int i=0;i<n;i++){lli x;cin>>x;presum[i+1]=presum[i]+x;}

        string s;cin>>s;lli l=0,r=n-1,sum=0;
        while(l<r){
            if(s[l]=='L'&&s[r]=='R')sum+=presum[r+1]-presum[l],l++,r--;
            else if(s[l]=='L')r--;
            else if(s[r]=='R')l++;
            else r--,l++;
        }
        cout<<sum;if(t)pnl
    }

    return 0;
}
