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

    int t,n,k,a,b;
    cin>>t;
    while(t--){
        cin>>n>>k;
        map<int,int>mpL,mpR;
        while(n--){
            cin>>a;
            mpR[a]=n;
            if(mpL.find(a)==mpL.end())mpL[a]=n;
        }
        while(k--){
            cin>>a>>b;
            mpL.find(a)!=mpL.end()&&mpL.find(b)!=mpL.end()&&mpL[a]>=mpR[b]pyn dnl
        }
    }

    return 0;
}
