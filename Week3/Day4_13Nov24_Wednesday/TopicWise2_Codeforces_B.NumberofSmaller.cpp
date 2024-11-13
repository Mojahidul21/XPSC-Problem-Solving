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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    queue<int>a;
    int aBack; // last element of a
    while(n--){int x;cin>>x;a.push(x);if(!n)aBack=x;}
    int ttl=0;
    bool flag=1; // 1 means aBack is greater than or equal to the current element of b
    while(flag&&m--){
        int b;
        cin>>b;
        if(aBack<b){cout<<ttl+a.size()pss;flag=0;break;}
        int cur=0;
        while(!a.empty()&&a.front()<b){cur++;a.pop();}
        ttl+=cur;
        cout<<ttl pss;
    }
    while(!flag&&m--)cout<<ttl+a.size()pss;
    return 0;
}
