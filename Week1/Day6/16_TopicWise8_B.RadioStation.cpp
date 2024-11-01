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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;

    map<string,string>srvr;
    while(n--){
        string srvrName,srvrIP;
        cin>>srvrName>>srvrIP;
        srvr.insert({srvrIP,srvrName});
    }

    while(m--){
        string command,ip;
        cin>>command>>ip;
        ip.pop_back();
        cout<<command pss<<ip<<"; #"<<srvr[ip]enl
    }

    return 0;
}
