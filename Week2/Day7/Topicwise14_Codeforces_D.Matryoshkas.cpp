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
        multiset<int>ms;
        while(n--){
            int x;
            cin>>x;
            ms.insert(x);
        }

        int ans=0;
        while(!ms.empty()){
            ans++;                      // found another set of doll
            int y=*ms.begin();
            while(ms.count(y)){
                ms.erase(ms.find(y));   // erase single occur
                y++;                    // y goes to next integer - not the set's next element
            }
        }
        cout<<ans enl
    }

    return 0;
}
