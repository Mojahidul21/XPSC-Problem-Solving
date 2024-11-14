#include <bits/stdc++.h>

#define snl cout << '\n'                     // snl - starting new line
#define enl cout << '\n'                     // enl - ending new line
#define dnl cout << '\n'                     // dnl - detached new line
#define pss <<" "                            // pss - print single space
#define pyn ? cout << "YES" : cout << "NO";  // pyn - print yes no

#define lli long long int                    // lli - long long int
#define con const int c = 1e                 // con - constant
#define imx INT_MAX                          // imx - INT_MAX
#define imn INT_MIN                          // imn - INT_MIN

using namespace std;

int n,m,element;
map<int,int>a,b;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n>>m;
    for(int i=1;i<=n;i++){cin>>element;a[element]++;}
    for(int i=1;i<=m;i++){cin>>element;b[element]++;}
    if(a.size()>b.size())swap(a,b);
    lli cnt=0;
    for(auto it=a.begin();it!=a.end();it++)cnt+=(lli)it->second*(lli)b[it->first];
    cout<<cnt;

    return 0;
}
