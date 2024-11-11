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
        lli n,m,h;
        cin>>n>>m>>h;
        priority_queue<lli>c,o; // c -> car, o -> outlet
        int v;
        while(n--){
            cin>>v;
            c.push(v);
        }

        while(m--){
            cin>>v;
            o.push(v);
        }

        lli ans=0;
        while(!c.empty()&&!o.empty()){
            ans+=min(c.top(),o.top()*h);
            c.pop(),o.pop();
        }
        cout<<ans enl
    }

    return 0;
}
