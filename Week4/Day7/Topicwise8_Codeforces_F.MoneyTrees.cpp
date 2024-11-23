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
        int n,k;cin>>n>>k;
        vector<vector<int>>v(2,vector<int>(n));
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++)cin>>v[i][j];
        }
        int l=0,r=0,fruit=0,mx=0;
        for(;r<n;r++){
            fruit+=v[0][r];
            if(r>0&&v[1][r-1]%v[1][r])fruit=v[0][r],l=r;
            while(fruit>k)fruit-=v[0][l],l++;
            mx=max(mx,r-l+1);
        }
        cout<<mx;if(t)pnl
    }

    return 0;
}
