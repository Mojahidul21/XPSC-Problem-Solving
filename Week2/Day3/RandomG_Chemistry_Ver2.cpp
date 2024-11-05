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
        string s;
        cin>>n>>k>>s;
        map<char,bool>odd;  // value 'true' or '1' means key is odd
                            // value 'false' or '0' means key is even
        for(auto c:s)odd[c]=!odd[c];
        int oddCnt=0;
        for(auto it=odd.begin();it!=odd.end();it++){
            if(it->second)oddCnt++;
        }
        oddCnt-k-1<=0 pyn dnl
    }

    return 0;
}
