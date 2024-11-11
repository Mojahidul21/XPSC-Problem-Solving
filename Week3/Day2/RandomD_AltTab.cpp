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

int n;
string s;
map<string,int>po;  // program vs order (last opened/reopened)
map<int,string>op;  // order (last opened/reopened) vs program

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n;
    while(n--){
        cin>>s;
        po[s]=n;    // more recent program will get smaller number
    }
    for(const auto&[p,o]:po)op[po[p]]=p;    // more recent order will come firs
    for(const auto&[o,p]:op)cout<<*(p.rbegin()+1)<<*(p.rbegin());

    return 0;
}
