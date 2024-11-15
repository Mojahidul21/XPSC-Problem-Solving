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
        int n,k;
        cin>>n>>k;
        vector<bool>s(n,0); // 0b   1w
        int w=0;            // occur of w in current window
        for(int i=0;i<n;i++){
            char c;
            cin>>c;
            if(c=='W')s[i]=1;
            if(i<k&&s[i])w++;
        }
        if(!w||n==k){cout<<w enl continue;}
        int mn=w;           // minimum of w
        for(int i=1;i<=n-k;i++){
            w+=s[i+k-1]-s[i-1],mn=min(mn,w);
            if(!mn){cout<<0 enl break;}
        }
        if(mn)cout<<mn enl
    }

    return 0;
}
