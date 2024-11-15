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

int n,m,a;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n>>m;
    queue<int>q;
    while(n--){cin>>a;q.push(a);}
    while(m--){
        cin>>a;
        while(!q.empty()&&a>q.front()){cout<<q.front()pss;q.pop();}
        cout<<a pss;
    }
    while(!q.empty()){cout<<q.front()pss;q.pop();}

    return 0;
}
