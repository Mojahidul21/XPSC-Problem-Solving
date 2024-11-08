#include<bits/stdc++.h>

#define snl cout<<'\n'                  // snl - staring new line
#define enl <<'\n';                     // enl - ending new line
#define dnl cout<<'\n';                 // dnl - detached new line
#define pss <<" "                       // pss - print single space
#define pyn ?cout<<"YES":cout<<"NO";    // pyn - print yes no

#define lli long long int               // lli - long long int
#define con const int c=1e              // con - constant
#define imx INT_MAX;                    // imx - INT_MAX
#define imn INT_MIN;                    // imn - INT_MIN

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=n+1;i>=2;i--){
            if(i==n+1)cout<<2 enl
            else if(i==n)cout<<(max(1,n-2))pss<<n enl
            else if(i==n-1)cout<<n-1 pss<<n-1 enl
            else cout<<i-1 pss<<i+1 enl
        }
    }

    return 0;
}
