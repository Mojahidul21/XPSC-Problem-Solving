#include<bits/stdc++.h>

#define pnl <<'\n';                     // pnl - print new line
#define pyn ?cout<<"YES":cout<<"NO";    // pyn - print yes no
#define lli long long int               // lli - long long int
#define con const int c=1e              // con - constant
#define imx INT_MAX;                    // imx - INT_MAX
#define imn INT_MIN;                    // imn - INT_MIN

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<lli>v(n);
    int oddCount=0;
    lli smallestOdd=1e9+1,sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        if(v[i]%2)oddCount++,smallestOdd=min(smallestOdd,v[i]);
    }
    cout<<(oddCount%2?sum-smallestOdd:sum);

    return 0;
}
